#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "rtcrobot_msg/msg/cmd_joy.hpp"



//cmdjoy_node sub joy_node and pub a topic have <cmd_joy> msg
class cmdJoy_node : public rclcpp::Node
{   
    public:
        cmdJoy_node() : Node("cmdJoy_Node"), v_max_(0.0), w_max_(0.0){
            this->declare_parameter<std::string>("cmd_joy_topic", "/cmd_joy");
            this->declare_parameter<float>("v_max", 0.5);
            this->declare_parameter<float>("w_max", 2.0);

            std::string cmd_joy_topic_ = this->get_parameter("cmd_joy_topic").as_string();
            v_max_ = this->get_parameter("v_max").as_double();
            w_max_  = this->get_parameter("w_max").as_double();

            subJoynode_ = this->create_subscription<sensor_msgs::msg::Joy>(
                "/joy", 10,
                std::bind(&cmdJoy_node::joyCallback, this, std::placeholders::_1)
            );

            pubcmdJoy_ = this->create_publisher<rtcrobot_msg::msg::CmdJoy>(cmd_joy_topic_, 10);

        }


    private:

    void joyCallback(const sensor_msgs::msg::Joy &msg){
        auto pubdata = rtcrobot_msg::msg::CmdJoy () ;

        // 3 v, 2 w
        pubdata.manual = 1;
        pubdata.vx = msg.axes[3]*v_max_;
        pubdata.az = msg.axes[2]*w_max_;
        pubdata.vy = 0.0;
        
        pubcmdJoy_->publish(pubdata);

    }
    
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subJoynode_;
    rclcpp::Publisher<rtcrobot_msg::msg::CmdJoy>::SharedPtr pubcmdJoy_;

    double v_max_, w_max_;

    
    
};

int main (int argc, char** argv){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<cmdJoy_node>());
    rclcpp::shutdown();
    return 0;
}