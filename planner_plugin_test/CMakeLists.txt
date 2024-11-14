cmake_minimum_required(VERSION 3.8)
project(planner_plugin_test)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav2_util REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(nav2_costmap_2d REQUIRED)
find_package(nav2_core REQUIRED)
find_package(pluginlib REQUIRED)


include_directories(
  include
)
set(dependencies
  rclcpp
  rclcpp_action
  rclcpp_lifecycle
  std_msgs
  nav2_util
  nav2_msgs
  nav_msgs
  geometry_msgs
  builtin_interfaces
  tf2_ros
  nav2_costmap_2d
  nav2_core
  pluginlib
)
set(library_name ${PROJECT_NAME}_plugin)

# add_executable(Astar_planner
# src/Astar_planner.cpp
# )
add_library(${library_name} SHARED
  src/AstarPlugin.cpp
  src/Astar_planner_plugin.cpp
)

# ament_target_dependencies(Astar_planner
# rclcpp
# nav_msgs
# geometry_msgs
# )
ament_target_dependencies(${library_name}
  ${dependencies}
)
target_compile_definitions(${library_name} PUBLIC "PLUGINLIB__DISABLE_BOOST_FUNCTIONS")
pluginlib_export_plugin_description_file(nav2_core global_planner_plugin.xml)

# install( TARGETS
#   Astar_planner
#   DESTINATION lib/${PROJECT_NAME}/
# )
install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}/
)

install(TARGETS ${library_name}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include/
)

install(FILES global_planner_plugin.xml
  DESTINATION share/${PROJECT_NAME}
)
ament_export_include_directories(include)
ament_export_libraries(${library_name})
ament_export_dependencies(${dependencies})

ament_package()
