#include <cmath>
#include <string>
#include <memory>
#include "nav2_util/node_utils.hpp"

#include "planner_plugin_test/AstarPlugin.hpp"
#include "planner_plugin_test/Astar_planner.hpp"

namespace nav2_AStar_planner
{

void AStar::configure(
  const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
  std::string name, std::shared_ptr<tf2_ros::Buffer> tf,
  std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros)
{
  node_ = parent.lock();
  name_ = name;
  tf_ = tf;
  //costmap_ = costmap_ros->getCostmap();
  costmap_ = costmap_ros->getCostmap();
  
  //float a = costmap_->getCost(1,1);
  //costmap_->getSizeInCellsX
  global_frame_ = costmap_ros->getGlobalFrameID();

  // Parameter initialization
  nav2_util::declare_parameter_if_not_declared(
    node_, name_ + ".interpolation_resolution", rclcpp::ParameterValue(
      0.1));
  node_->get_parameter(name_ + ".interpolation_resolution", interpolation_resolution_);
}

void AStar::cleanup()
{
  RCLCPP_INFO(
    node_->get_logger(), "CleaningUp plugin %s of type NavfnPlanner",
    name_.c_str());
}

void AStar::activate()
{
  RCLCPP_INFO(
    node_->get_logger(), "Activating plugin %s of type NavfnPlanner",
    name_.c_str());
}

void AStar::deactivate()
{
  RCLCPP_INFO(
    node_->get_logger(), "Deactivating plugin %s of type NavfnPlanner",
    name_.c_str());
}

nav_msgs::msg::Path AStar::createPlan(
  const geometry_msgs::msg::PoseStamped & start,
  const geometry_msgs::msg::PoseStamped & goal)
{
  nav_msgs::msg::Path global_path;

  // Checking if the goal and start state is in the global frame
  if (start.header.frame_id != global_frame_) {
    RCLCPP_ERROR(
      node_->get_logger(), "Planner will only except start position from %s frame",
      global_frame_.c_str());
    return global_path;
  }

  if (goal.header.frame_id != global_frame_) {
    RCLCPP_INFO(
      node_->get_logger(), "Planner will only except goal position from %s frame",
      global_frame_.c_str());
    return global_path;
  }

  global_path.poses.clear();
  global_path.header.stamp = node_->now();
  global_path.header.frame_id = global_frame_;

   Astar astar;
   unsigned char* costmap_grid = costmap_->getCharMap();

    unsigned int width = costmap_->getSizeInCellsX();
    unsigned int height = costmap_->getSizeInCellsY();

// Create a vector of int8_t and copy data from the costmap
    std::vector<int8_t> costmap_vector(costmap_grid, costmap_grid + (width * height));
    int start_grid_x = int((start.pose.position.x - costmap_->getOriginX())/costmap_->getResolution());
    int start_grid_y = int((start.pose.position.y - costmap_->getOriginY())/costmap_->getResolution());
    int goal_grid_x = int((goal.pose.position.x - costmap_->getOriginX())/costmap_->getResolution());
    int goal_grid_y = int((goal.pose.position.y - costmap_->getOriginY())/costmap_->getResolution());


  std::vector<ANode*>NodePath = astar.findPath(costmap_vector,new ANode(start_grid_x,start_grid_y), new ANode(goal_grid_x, goal_grid_y));
  
  if (!NodePath.empty())
  {
    for (auto &node : NodePath )
    {
        geometry_msgs::msg::PoseStamped pose;
        pose.pose.position.x = start.pose.position.x + node->x*costmap_->getResolution();
        pose.pose.position.y = start.pose.position.y + node->y*costmap_->getResolution();
        pose.pose.position.z = 0.0;
        pose.pose.orientation.x = 0.0;
        pose.pose.orientation.y = 0.0;
        pose.pose.orientation.z = 0.0;
        pose.pose.orientation.w = 1.0;
        pose.header.stamp = node_->now();
        pose.header.frame_id = global_frame_;
        global_path.poses.push_back(pose);       
    }
  }
  geometry_msgs::msg::PoseStamped goal_pose = goal;
  goal_pose.header.stamp = node_->now();
  goal_pose.header.frame_id = global_frame_;
  global_path.poses.push_back(goal_pose);

  return global_path;
  //astar.findPath();
    //costmap_->copyWindow()
  // calculating the number of loops for current value of interpolation_resolution_
//   int total_number_of_loop = std::hypot(
//     goal.pose.position.x - start.pose.position.x,
//     goal.pose.position.y - start.pose.position.y) /
//     interpolation_resolution_;
//   double x_increment = (goal.pose.position.x - start.pose.position.x) / total_number_of_loop;
//   double y_increment = (goal.pose.position.y - start.pose.position.y) / total_number_of_loop;

//   for (int i = 0; i < total_number_of_loop; ++i) {
//     geometry_msgs::msg::PoseStamped pose;
//     pose.pose.position.x = start.pose.position.x + x_increment * i;
//     pose.pose.position.y = start.pose.position.y + y_increment * i;
//     pose.pose.position.z = 0.0;
//     pose.pose.orientation.x = 0.0;
//     pose.pose.orientation.y = 0.0;
//     pose.pose.orientation.z = 0.0;
//     pose.pose.orientation.w = 1.0;
//     pose.header.stamp = node_->now();
//     pose.header.frame_id = global_frame_;
//     global_path.poses.push_back(pose);
//   }

//   geometry_msgs::msg::PoseStamped goal_pose = goal;
//   goal_pose.header.stamp = node_->now();
//   goal_pose.header.frame_id = global_frame_;
//   global_path.poses.push_back(goal_pose);

//   return global_path;
}

}  // namespace nav2_AStar_planner

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(nav2_AStar_planner::AStar, nav2_core::GlobalPlanner) //namespace::class