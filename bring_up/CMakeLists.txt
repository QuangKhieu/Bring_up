cmake_minimum_required(VERSION 3.8)
project(bring_up)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
#set(rtcrobot_msg_DIR "install/rtcrobot_msg/share/rtcrobot_msg/cmake")

find_package(rtcrobot_msg REQUIRED)



add_executable(odom_publisher src/odom_publisher.cpp)
ament_target_dependencies(odom_publisher
rclcpp
nav_msgs
tf2 
tf2_geometry_msgs
tf2_ros
rtcrobot_msg
)
install(TARGETS odom_publisher
DESTINATION lib/${PROJECT_NAME}

)
install(
  DIRECTORY 
  launch
  config
  DESTINATION share/${PROJECT_NAME}/
)




# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)



ament_package()
