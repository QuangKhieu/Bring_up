from launch import LaunchDescription
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution, LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Declare launch arguments
    port_arg = DeclareLaunchArgument("port", default_value="/dev/ttyUSB2", description="Serial port for the IMU sensor")
    baudrate_arg = DeclareLaunchArgument("baudrate", default_value="115200", description="Baudrate for the IMU sensor")
    slaveID_arg = DeclareLaunchArgument("slaveID", default_value="80", description="Slave ID for the IMU sensor")

    # Define robot_description using the xacro command with parameters
    robot_description_content = Command(
        [
            FindExecutable(name="xacro"),
            " ",
            PathJoinSubstitution([FindPackageShare("imu_plugin_pkg"), "urdf", "imu_only.urdf.xacro"]),
            " ",
            "port_:=", LaunchConfiguration("port"),
            " ",
            "baudrate_:=", LaunchConfiguration("baudrate"),
            " ",
            "slaveID_:=", LaunchConfiguration("slaveID")
        ]
    )

    # Define the robot description dictionary for use in the node parameters
    robot_description = {"robot_description": robot_description_content}

    # Define the control node for ros2_control
    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description],
        output="both"
    )

    # Launch description
    return LaunchDescription([
        port_arg,
        baudrate_arg,
        slaveID_arg,
        control_node,
    ])
