from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import launch_ros
import os

def generate_launch_description():
    sink_pkg = launch_ros.substitutions.FindPackageShare(package='sick_scan2').find('sick_scan2')
    dis_pkg = launch_ros.substitutions.FindPackageShare(package='robot_display').find('robot_display')
    br_pkg = launch_ros.substitutions.FindPackageShare(package='bring_up').find('bring_up')

    l_sink_pkg_path = os.path.join(
        sink_pkg,
        'launch',
        'sick_tim_7xx.launch.py'
    )

    l_dis_pkg_path = os.path.join(
        dis_pkg,
        'launch',
        'display_diff_robot_launch.py'
    )

    odom_config_path = os.path.join(
        br_pkg,
        'config',
        'odom_para.yaml'
    )

    cmdJoy_config_path = os.path.join(
        br_pkg,
        'cofig',
        'joy_para.yaml'
    )    

    odom_publisher_node = Node(
        package='bring_up',  
        executable='odom_publisher', 
        name='odom_publisher',
        output='screen',
        parameters=[odom_config_path]  
    )

    cmdJoypub_node = Node(
        package="bring_up",
        executable="cmd_joy_publisher",
        name="cmd_joy_publisher",
        output = "screen",
        parameters= [cmdJoy_config_path]
    ) 

    return LaunchDescription([
        # IncludeLaunchDescription(
        #     PythonLaunchDescriptionSource(l_sink_pkg_path)
        # ),
        # IncludeLaunchDescription(
        #     PythonLaunchDescriptionSource(l_dis_pkg_path)
        # ),
        odom_publisher_node
        #cmdJoypub_node
    ])


