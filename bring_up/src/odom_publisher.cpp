#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2/LinearMath/Quaternion.h" //tf2 :: quaternion
#include "tf2_ros/transform_broadcaster.h" 
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp" // For tf2::toMsg
#include "rtcrobot_msg/msg/motor_data.hpp"
#include "rtcrobot_msg/msg/wheel_data.hpp"
#include "chrono"
#include "functional"



using namespace std::chrono_literals;

constexpr double PI = 3.14159265358979323846;
class OdometryNode : public rclcpp::Node {
public:
    OdometryNode() : Node("odometry_node"), x_(0.0), y_(0.0), theta_(0.0), v_(0.0), w_(0.0){
        // para
        this->declare_parameter<std::string>("wheeldata_topic", "/wheel_data");
        this->declare_parameter<std::string>("odom_topic", "/odom");
        this->declare_parameter<std::string>("frame_id", "odom");
        this->declare_parameter<std::string>("child_frame_id", "base_link");
        this->declare_parameter<int>("time_period", 200);
        this->declare_parameter<double>("base_width", 0.407);
        this->declare_parameter<double>("wheel_radius", 0.075);
        this->declare_parameter<double>("gear_ratio", 20.0);

        std::string wheeldata_topic_ = this->get_parameter("wheeldata_topic").as_string();
        std::string odom_topic_ = this->get_parameter("odom_topic").as_string();
        frame_id_ = this->get_parameter("frame_id").as_string();
        child_frame_id_ = this->get_parameter("child_frame_id").as_string();
        int time_period_ = this->get_parameter("time_period").as_int();
        base_width_ = this->get_parameter("base_width").as_double();
        wheel_radius_ = this->get_parameter("wheel_radius").as_double();
        gear_ratio_ = this->get_parameter("gear_ratio").as_double();

        RCLCPP_INFO(this->get_logger(), "base_width: %f", base_width_) ;            

        auto timer_period_ms = std::chrono::milliseconds(time_period_);

       wheeldata_subcriber_ = this->create_subscription<rtcrobot_msg::msg::WheelData>(
        wheeldata_topic_, 10,
        std::bind(&OdometryNode::wheeldataCallback,this ,std::placeholders::_1)
        );
        odom_publisher_  = this->create_publisher<nav_msgs::msg::Odometry>("/odom",10);

        broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);

        lasttime_ = this->now();
        timer_ = this->create_wall_timer(timer_period_ms, std::bind(&OdometryNode::publish_odom, this));


    }

private:

    void wheeldataCallback(const rtcrobot_msg::msg::WheelData::SharedPtr msg){ //

        // auto left_rpm = msg->left;
        // auto right_rpm = msg->right; 
        auto left_rpm = (msg->left).speed; // sign ???????
        auto right_rpm = msg->right.speed;

        double vl = left_rpm*2*PI*wheel_radius_/gear_ratio_/60; //linear velocity of left wheel
        double vr = right_rpm*2*PI*wheel_radius_/gear_ratio_/60; //linear velocity of right wheel 

        // tranform rpm each wheel to v and w

        v_ = (vl+vr)/2;
        w_ = (vr-vl)/base_width_;
        
    }

    void publish_odom (){
        //cal, publish odom, tf 

        //cal odom
        auto  odom_msg = nav_msgs::msg::Odometry();
        rclcpp::Time current_time = this->now();
        double dt = (current_time - lasttime_).seconds();

        cal_odom(dt);

        //odom


        odom_msg.header.stamp = current_time;
        odom_msg.header.frame_id = frame_id_;
        odom_msg.child_frame_id = child_frame_id_;

        //Position
        odom_msg.pose.pose.position.x = x_;
        odom_msg.pose.pose.position.y = y_;
        odom_msg.pose.pose.position.z = 0.0;

        //orientation

        tf2::Quaternion q;
        q.setRPY(0, 0, theta_);

        odom_msg.pose.pose.orientation = tf2::toMsg(q);
        
        //tf
        geometry_msgs::msg::TransformStamped transform_;

        transform_.header.stamp =  current_time;
        transform_.header.frame_id = frame_id_;
        transform_.child_frame_id = child_frame_id_;
        
        //trans

        transform_.transform.translation.x = x_;
        transform_.transform.translation.y = y_;
        transform_.transform.translation.z = 0.0;

        transform_.transform.rotation.x = q.getX();
        transform_.transform.rotation.y = q.getY();
        transform_.transform.rotation.z = q.getZ();
        transform_.transform.rotation.w = q.getW();

        //pub
        odom_publisher_->publish(odom_msg);
        broadcaster_->sendTransform(transform_);
        


        lasttime_ = current_time;

        
    }
    void cal_odom(double& dt)
    {
        double deltaTheta = w_* dt;
        theta_ += deltaTheta;
        double deltaX = v_ * dt * std::cos(theta_);
        double deltaY = v_ * dt * std::sin(theta_);

        
        x_ += deltaX;
        y_ += deltaY; 


    }

    rclcpp::Subscription<rtcrobot_msg::msg::WheelData>::SharedPtr wheeldata_subcriber_;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_publisher_;
    std::shared_ptr<tf2_ros::TransformBroadcaster> broadcaster_;
    
    double x_, y_, theta_, v_, w_;
    double base_width_, wheel_radius_, gear_ratio_;
    std::string frame_id_, child_frame_id_  ;
    rclcpp::Time lasttime_;
    rclcpp::TimerBase::SharedPtr timer_;
    

};

int main (int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OdometryNode>());
    rclcpp::shutdown();
    return 0;
}