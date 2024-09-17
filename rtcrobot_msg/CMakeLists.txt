cmake_minimum_required(VERSION 3.8)
project(rtcrobot_msg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/CmdJoy.msg"
  "msg/MotorData.msg"
  "msg/WheelData.msg"
  "msg/State.msg"
  "msg/WayPoint.msg"
  "msg/Target.msg"
  "msg/RobotPose.msg"
  "msg/RawObstacle.msg"
  "msg/ObstacleCir.msg"
  "msg/ObstacleSeg.msg"
  "msg/Obstacle.msg"
  "msg/ObstacleRange.msg"
  "msg/Mission.msg"
  "msg/MissionStatus.msg"
  "msg/StringStamped.msg"
  "msg/NodePath.msg"
  "msg/TargetNode.msg"
  "msg/StateAMR.msg"
  "msg/TargetLift.msg"
  "msg/BatteryStatus.msg"
  "msg/RobotSpeed.msg"
  "msg/AmrList.msg"
  "msg/AmrConn.msg"
  "msg/MapData.msg"
  "msg/Mode.msg"
  "msg/PlcRead.msg"
  "msg/PlcWrite.msg"
  "msg/RobotStatus.msg"
  DEPENDENCIES builtin_interfaces std_msgs geometry_msgs
 )

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
