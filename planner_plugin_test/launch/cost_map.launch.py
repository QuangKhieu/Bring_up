from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='nav2_costmap_2d',
            executable='nav2_costmap_2d',
            output='screen',
            name='global_costmap',
            parameters=[
               '/home/quangkhieu/Documents/ros2_ws/src/planner_plugin_test/config/cost_map.yaml'
            ]
        )
    ])
