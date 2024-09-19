#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <array>
#include <cmath>

class Move2Goal : public rclcpp::Node {
public:
    Move2Goal() : Node("move2goal") {
        // Load parameters
        // load_parameters();
        kp_v_ = 0.5;
        kp_w_ = 1;
        goal_x_ = 0.5;
        goal_y_ = 0;

        // Subscriber to the odometry topic
        odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/odom", 10, std::bind(&Move2Goal::odomCallback, this, std::placeholders::_1));

        // Publisher for velocity commands
        vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

        // Timer to periodically execute the control loop
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100), std::bind(&Move2Goal::control_loop, this));
    }

private:
    // Callback for odometry data
    void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg) {
        latest_odom_ = *msg;
    }

    // Main control loop
    void control_loop() {
        geometry_msgs::msg::Twist vel_data = m2g_control({goal_x_, goal_y_});
        vel_pub_->publish(vel_data);
    }

    // Load parameters from the YAML file
    // void load_parameters() {
    //     // Load the YAML file
    //     YAML::Node config = YAML::LoadFile("/home/Documents/ros2_ws/src/m2g_test/config/move2goal.yaml");

    //     kp_v_ = config["control_gain"]["p_v"].as<double>();
    //     kp_w_ = config["control_gain"]["p_w"].as<double>();

    //     v_max_ = config["init_para"]["v_max"].as<double>();
    //     w_max_ = config["init_para"]["w_max"].as<double>();

    //     goal_x_ = config["init_para"]["goal"]["x"].as<double>();
    //     goal_y_ = config["init_para"]["goal"]["y"].as<double>();
    // }

    // Motion-to-goal control
    geometry_msgs::msg::Twist m2g_control(const std::array<double, 2>& setpoint) {
        auto position = latest_odom_.pose.pose.position;
        auto orientation = latest_odom_.pose.pose.orientation;
        float qw = orientation.w;
        float qz = orientation.z;

        double yaw = atan2(2.0 * (qw * qz), 1.0 - 2.0 * (qz * qz));

        float x_vec = setpoint[0] - position.x;
        float y_vec = setpoint[1] - position.y;
        float mag_vec = std::sqrt(std::pow(x_vec, 2) + std::pow(y_vec, 2));

        geometry_msgs::msg::Twist twist;
        if (mag_vec < 0.05) {
            return twist;
        }

        // Control v
        float v = kp_v_ * mag_vec;
        v = std::min(v, v_max_);

        // Control w
        float error_ang = std::atan2(y_vec, x_vec) - yaw;
        float w = kp_w_ * error_ang;
        w = std::clamp(w, -w_max_, w_max_);

        twist.linear.x = v;
        twist.angular.z = w;

        return twist;
    }

    // Subscriber and Publisher
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    // Variables to store the latest odometry and parameters
    nav_msgs::msg::Odometry latest_odom_;
    float kp_v_, kp_w_, v_max_, w_max_;
    float goal_x_, goal_y_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Move2Goal>());
    rclcpp::shutdown();
    return 0;
}

