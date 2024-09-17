#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2/LinearMath/Quaternion.h" //tf2 :: quaternion
#include "tf2_ros/transform_broadcaster.h" 
#include "tf2_geometry_msgs/tf2_geometry_msgs.h" // For tf2::toMsg
#include "rtcrobot_msg/msg/wheel_data.hpp"



class OdometryNode : public rclcpp::Node {
public:
    OdometryNode() : Node("odometry_node"), x_(0.0), y_(0.0), theta_(0.0), v_(0.0), w_(0.0){
       wheeldata_subcriber_ = this->create_subscription<rtcrobot_msg::msg::WheelData>(
        "wheeldata_topic", 10,
        std::bind(&OdometryNode::wheeldataCallback,this ,std::placeholders::_1)
        );
        odom_publisher_  = this->create_publisher<nav_msgs::msg::Odometry>("/odom",10);

        broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);

        lasttime_ = this->now();

    }

private:

    void wheeldataCallback(const rtcrobot_msg::msg::WheelData::SharedPtr msg){
        // Ectract

        auto left_rpm = msg->left;
        auto right_rpm = msg->right; 

        // tranform rpm each wheel to v and w

        //v=, w=
        
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
        odom_msg.header.frame_id = "odom";
        odom_msg.child_frame_id = "base_link";

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
        transform_.header.frame_id = "odom";
        transform_.child_frame_id = "base_link";
        
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
        double deltaX = v_ * dt *cos(deltaTheta);
        double deltaY = v_ * dt *sin(deltaTheta);

        theta_ += deltaTheta;
        x_ += deltaX;
        y_+= deltaY; 


    }

    rclcpp::Subscription<rtcrobot_msg::msg::WheelData>::SharedPtr wheeldata_subcriber_;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_publisher_;
    std::shared_ptr<tf2_ros::TransformBroadcaster> broadcaster_;
    
    double x_, y_, theta_, v_, w_;
    rclcpp::Time lasttime_;

};