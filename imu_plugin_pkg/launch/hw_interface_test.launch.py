from launch import LaunchDescription
from launch.substitutions import Command, FindExecutable,PathJoinSubstitution
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import os

def generate_launch_description():

    robot_description_content = Command( #if use xacro file
        [
            FindExecutable(name="xacro"),
            " " ,
            PathJoinSubstitution([FindPackageShare("imu_plugin_pkg"), "urdf", "imu.urdf.xacro"])]
    )
    robot_description_content3 = Command( #if use xacro file
        [
            FindExecutable(name="xacro"),
            " " ,
            PathJoinSubstitution([FindPackageShare("imu_plugin_pkg"), "urdf", "imu_only.urdf.xacro"])]
    )   


    robot_description = {"robot_description" : robot_description_content}

    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("imu_plugin_pkg"),
            "config",
            "imu_broadcaster_controller.yaml"
        ]
    )
    config_file_path = os.path.join(
        get_package_share_directory('imu_plugin_pkg'), 
        'config', 
        'imu_broadcaster_controller.yaml'  
    )

    imu_only_urdf_path = os.path.join(
        get_package_share_directory("imu_plugin_pkg"),
        "urdf",
        "imu_only.urdf"
    )
    with open(imu_only_urdf_path,'r') as infp:
        robot_description_content2 = infp.read() # if use urdf
    

#     ros2_control_node loads the robot hardware description:

#     The ros2_control_node reads the URDF file, which includes the <ros2_control> element, where your hardware interface plugin (e.g., diff_hardware/DiffDriveHareware) is specified.
#     The hardware interface is loaded but not yet activated.

# Controllers must be spawned:

#     After the hardware interface is loaded, need to spawn controllers (e.g., joint_state_broadcaster or diff_drive_controller) using the spawner executable.
#     These controllers are responsible for interacting with the hardware interface by reading/writing commands to it.

# The controllers must be activated:

#     Once the controllers are spawned, they will initialize but remain in the inactive state.
#     The spawner also ensures that the controllers are activated, meaning they will begin interacting with the hardware interface.

    control_node = Node (
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[{"robot_description" : robot_description_content2}, config_file_path], # parameters = [{"robot_description" : robot_description_content}, "home/../hw_interface_test/config/diff_controller.yaml"]
        output="both"
    )

    # robot_state_pub_node = Node(
    #     package="robot_state_publisher",
    #     executable="robot_state_publisher",
    #     output="both",
    #     parameters=[robot_description]
    # )
    imu_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["imu_sensor_broadcaster", "--controller-manager", "/controller_manager"],
    )
    imu_broadcaster_spawner2 = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["imu_sensor_broadcaster2", "--controller-manager", "/controller_manager"],
    )


    return LaunchDescription([
        control_node,
        imu_broadcaster_spawner,
        imu_broadcaster_spawner2
        # robot_state_pub_node,

    ])   