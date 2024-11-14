cmake_minimum_required(VERSION 3.8)
project(imu_plugin_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
# Find modbus library
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBMODBUS REQUIRED libmodbus)
#set dependencies
set(dependencies
  hardware_interface
  pluginlib
  rclcpp_lifecycle
  realtime_tools
  controller_manager
)

# find dependencies
find_package(ament_cmake REQUIRED)
foreach(depen IN ITEMS ${dependencies})
  find_package(${depen} REQUIRED)  
endforeach()

# Include directories
include_directories(
  ${LIBMODBUS_INCLUDE_DIRS}
)
include_directories(
  include
)
#COMPILE (set name)
add_library(
  ${PROJECT_NAME}
  SHARED 
  src/hwt.cpp
  src/hwt_plugin.cpp
)

#link lib for .so/.a file

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)

ament_target_dependencies(${PROJECT_NAME} PUBLIC
  ${dependencies}
  LIBMODBUS
)

#export xml hardware plugin

pluginlib_export_plugin_description_file(hardware_interface imu_plugin.xml)

#install(save) hpp file into install/include folder

install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}

)

#install lib to  lib folder that external prjects can link to it (specific of cmake)

install(
  TARGETS ${PROJECT_NAME}
  EXPORT imu_plugin
  ARCHIVE DESTINATION lib #static lib
  LIBRARY DESTINATION lib # dynamic lib
  RUNTIME DESTINATION bin # bin contains so file linking to lib while lib run or compile
)

install(
  DIRECTORY 
  launch
  config
  urdf
  DESTINATION share/${PROJECT_NAME}/
)
#export lib(plugin) for pkg in same workspace can use (specific of ROS)
ament_export_targets (imu_plugin HAS_LIBRARY_TARGET) #set target
ament_export_dependencies (${dependencies})






ament_package()
