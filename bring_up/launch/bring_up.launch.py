from launch import LaunchDescription
#from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import launch_ros
import os

def generate_launch_description():
    sink_pkg = launch_ros.substitutions.FindPackageShare(package='sick_scan2').find('sick_scan2')
    dis_pkg = launch_ros.substitutions.FindPackageShare(package='robot_display').find('robot_display')

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
    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(l_sink_pkg_path)
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(l_dis_pkg_path)
        )    
    ])


