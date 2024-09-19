cmake_minimum_required(VERSION 3.8)
project(m2g_test)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
# Required dependencies
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)




# Executable
add_executable(move2goal_node src/m2g.cpp)

# Link libraries
ament_target_dependencies(move2goal_node 
  rclcpp
  nav_msgs
  geometry_msgs

)

# Install executable
install(TARGETS move2goal_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install configuration files
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}/
)

# Install launch files if you have them
# install(DIRECTORY launch
#   DESTINATION share/${PROJECT_NAME}/
# )


ament_package()
