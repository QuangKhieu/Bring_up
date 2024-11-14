#include <unordered_set>
#include <queue>
#include <functional>
#include <cmath>
#include <vector>
#include <limits>
#include <set>

#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/occupancy_grid.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav_msgs/msg/path.hpp"
#include <iostream>



uint32_t GRID_WIDTH = 0;
uint32_t GRID_HEIGHT = 0;
uint32_t GRID_X = 0;
uint32_t GRID_Y = 0;



class ANode
{
    public:
        ANode(int x_, int y_):x(x_), y(y_){};
        int x, y; //courdinate;
        ANode* parent = nullptr;
        float g = std::numeric_limits<float>::infinity();
        float h = std::numeric_limits<float>::infinity();
        float f() const {return (g + h);};

        bool operator==(const ANode& otherANode) const
        {
            return (x == otherANode.x && y== otherANode.y) 
            || std::sqrt(pow((x - otherANode.x),2) + pow((y - otherANode.y),2)) < 0.5;
        } 

    private:
};
struct hashANode
{
    std::size_t operator()(const ANode* ANode )   const {
        return std::hash<int>()(ANode->x) ^ std::hash<int>()(ANode->y);
    }
};

struct compared
{
    bool operator()(const ANode* ANode1, const ANode* ANode2)
    {
        return ANode1->f() > ANode2->f();
    }
};

float eulerDis(const ANode* n1, const ANode* n2)
{
    return std::sqrt(pow((n1->x - n2->x),2) + pow((n1->y - n2->y),2));
}

class Astar
{
    public:
    std::vector<ANode*> findPath(const std::vector<int8_t> &grid, ANode* start, ANode* goal )
    {
        std::priority_queue<ANode*, std::vector<ANode*>, compared> openSet;
        std::unordered_set<ANode*, hashANode> openSet_check;
        std::set<std::pair<int, int>> closeSet_;
        std::set<std::pair<int, int>> openSet_;
        //std::vector<ANode*> openSet_check ;

        openSet.push(start);
        openSet_.insert({start->x, start->y});

        //open
        start->g = 0;
        start->h = eulerDis(start, goal);

        while (!openSet.empty())
        //for (int i=0; i<100; i++)
        {
            ANode* current = openSet.top();
            openSet.pop();
            openSet_.erase({current->x, current->y});
            // if(openSet_check.find(start) != openSet_check.end())
            // {
            //     std::cout<<"yes"<<std::endl;
            // }
            // else
            // {
            //     std::cout<<"no"<<std::endl;
            // }
            //std::cout<<"current_x: "<<current->x<<" "<<"current_y: "<<current->y<<std::endl;

            // is find goal 
            if (*current == *goal)
            {  
                return reconstructPath(current);
            }

            closeSet_.insert({current->x, current->y});

            // ANode* temp_current = new ANode(current->x, current->y);
            //     if (closeSet_.find({temp_current->x, temp_current->y}) != closeSet_.end())
            //     {
            //         std::cout<<"test curent if in closeSet : yes x:"<<temp_current->x<<" "<<"y: "<<temp_current->y<<std::endl;
                    
                    
            //     }
            //     else{
            //         std::cout<<"test curent if in closeSet: no" <<std::endl;
            //     }            

            for (ANode* neighbor_node : getNeighbors(current))
            {
                //std::cout<<"neigbor of current node: "<< "("<<neighbor_node->x<<" "<<neighbor_node->y<<"), "<<std::endl;
                ANode* temp_Neighbor = new ANode(neighbor_node->x, neighbor_node->y);
                //check if in close list 
                if (closeSet_.find({temp_Neighbor->x, temp_Neighbor->y}) != closeSet_.end())
                {
                    //std::cout<<"continue when meet in closeSet: x:"<<temp_Neighbor->x<<" "<<"y: "<<temp_Neighbor->y<<std::endl;
                    continue;
                }
                float grid_value = grid[neighbor_node->y * GRID_WIDTH + neighbor_node->x];
                if (grid_value == -1 || grid_value == 100)
                {
                    continue;;
                }
                float tentative_g = current->g + eulerDis(current, temp_Neighbor);              
                //find new node or find better path
                if (tentative_g < temp_Neighbor->g)
                {
                    

                    temp_Neighbor->g = tentative_g;
                    temp_Neighbor->h = eulerDis(temp_Neighbor, goal);   
                    temp_Neighbor->parent = current;
                    if (openSet_.find({temp_Neighbor->x, temp_Neighbor->y})==openSet_.end())
                        {
                            //std::cout<<"ok"<<std::endl;
                            //std::cout<<"--unexflored neigbor of current node"<<std::endl;
                            openSet.push(temp_Neighbor);
                            openSet_.insert({temp_Neighbor->x, temp_Neighbor->y});
                        }
                    else
                    {
                        delete temp_Neighbor;
                    }
            
                }

            free(neighbor_node);
            }
            //std::cout<<std::endl;

        };
        
        std::cout<<"size of closeSet: "<< closeSet_.size()<<std::endl;
        std::cout<<"size of openSet: "<< openSet_.size()<<std::endl;
        std::cout<<"nearest_x: "<<openSet.top()->x<<" "<<"nearest_y: "<<openSet.top()->y<<std::endl; 
        return {};
    }



    std::vector<ANode*> getNeighbors(ANode* node)
    {
        std::vector<ANode*> neighbors;

        int x = node->x;
        int y = node->y;

        //dir 
        const std::vector <std::pair<int, int>> directions ={
            {0, 1}, {1, 1}, {1, 0}, {1, -1},
            {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}
        };

        for (const auto& dir : directions)
        {
            int newX = x + dir.first;
            int newY = y + dir.second;

            if(newX >= 0 && newX < static_cast<int>(GRID_WIDTH) && newY >= 0 && newY < static_cast<int>(GRID_HEIGHT))
            {
                ANode* neighbor = new ANode(newX, newY);
                //neighbor->g = grid[newY * GRID_WIDTH + newX];
                neighbors.push_back(neighbor);

            }
        }
        
        return neighbors;
    }

    std::vector<ANode*> reconstructPath(ANode* current)
    {
        std::vector <ANode*> path;
        while (current)
        {
            path.push_back(current);
            current = current->parent;
        }
        std::reverse(path.begin(), path.end());
        return path;
    }
    private:

};

class Astar_planner : public rclcpp::Node
{
    public:
        Astar_planner():Node("Astar_planner_node")
        {

            
            map_subcriber = this->create_subscription<nav_msgs::msg::OccupancyGrid>(
                "/map", 10 ,std::bind(&Astar_planner::updateCallback, this,std::placeholders::_1 ));
            
            path_pub = this->create_publisher<nav_msgs::msg::Path>("/path_topic",10);
            
            
        }
        // void writeVectorToFile(const std::vector<int8_t>& vec) {
        //     if (data_file_.is_open()) {
        //         for (size_t i = 0; i < vec.size()-1; ++i) {
        //             data_file_ << static_cast<int>(vec[i])<<std::endl;  // Cast to int for readable output
        //             if (i != vec.size() - 1) {
        //                 data_file_ << ",";  // Add commas between elements
        //             }
        //         }
        //         data_file_ << std::endl;
        //     } else {
        //         std::cerr << "Failed to write to file" << std::endl;
        //     }
        // }        
        void pub_path_func()
        {
            Astar astar;
            std::vector<int8_t> grid = data.data;
            // Open the file in append mode
            // data_file_.open("/home/quangkhieu/Documents/output_data2.csv", std::ios::app);
            // if (!data_file_.is_open()) {
            //     RCLCPP_ERROR(this->get_logger(), "Failed to open file");
            //     return;
            // }            
            // writeVectorToFile(grid);
            // // data_file_ << static_cast<int> (grid[0])<<std::endl;
            // // data_file_ << static_cast<int> (grid[1])<<std::endl;
            // // std::cout<<"grid0: "<<grid[0]<<"\n";
            // // std::cout<<"grid1: "<<grid[1]<<"\n";
            // data_file_.close();
            GRID_WIDTH = data.info.width;
            GRID_HEIGHT = data.info.height;
            float resolution = data.info.resolution;
            std::cout<<"grid_size: "<<size(grid)<<"\n";
            //     std::vector<int8_t> grid = {
            //         0,  0,  0, 0, 0, 0, 0,  0,  0, 0,
            //         0, -1,  1, 0, 0, 0, 0,  1,  1, 0,
            //         0, -1,  1, 0, 0, 0, 0,  1,  1, 0,
            //         0,  0,  0, 0, 0, 0, 0,  0,  0, 0,
            //         0, -1,  1, 0, 0, 0, 0, -1, -1, 0,
            //         0, -1,  1, 0, 0, 0, 0, -1, -1, 0,
            //         0,  0,  0, 0, 0, 0, 0,  0,  0, 0,
            //         0, -1, -1, 0, 0, 0, 0, -1, -1, 0,
            //         0, -1, -1, 0, 0, 0, 0, -1, -1, 0,
            //         0,  0,  0, 0, 0, 0, 0,  0,  0, 0
            //     };
            // GRID_WIDTH = 10;
            // GRID_HEIGHT = 10;

            ANode* start = new ANode(0,0);

            ANode* goal = new ANode(190, 200);  
            //RCLCPP_INFO(this->get_logger(),"sGrid: %d, gGrid: %d ", data.data[0*GRID_WIDTH+0],  data.data[25*GRID_WIDTH+20]);
            
            std::vector<ANode*> pathNode = astar.findPath(grid, start, goal );

            nav_msgs::msg::Path path_msg;

            path_msg.header.stamp = this->now();
            path_msg.header.frame_id = "map";  


            if (!pathNode.empty()) {
                std::cout << "Path found:\n";
                for (const auto& node : pathNode) {
                    //std::cout << "(" << node->x << ", " << node->y << ")\n";
                    geometry_msgs::msg::PoseStamped pose_stamped;
                    pose_stamped.header.stamp = this->now();
                    pose_stamped.header.frame_id = "map";

                    pose_stamped.pose.position.x = (node->x)*resolution+data.info.origin.position.x; 
                    pose_stamped.pose.position.y = (node->y)*resolution+data.info.origin.position.y;
                    //std::cout<<"x: "<<pose_stamped.pose.position.x<<"\n";
                    //std::cout<<"y: "<<pose_stamped.pose.position.y<<"\n";
                    pose_stamped.pose.position.z = 0.0;
                    pose_stamped.pose.orientation.w = 1.0;  

                    path_msg.poses.push_back(pose_stamped);  
                }
            } else {
                std::cout << "No path found\n";
            }

           path_pub->publish(path_msg);
        }

        void updateCallback(const nav_msgs::msg::OccupancyGrid::SharedPtr msg)
        {
            data = *msg;

            

            pub_path_func();
            
            //RCLCPP_INFO(this->get_logger(),"data: %f", data.info.resolution);
            //int width = data.info.width;        
        }

    private:

    
    rclcpp::Subscription<nav_msgs::msg::OccupancyGrid>::SharedPtr map_subcriber;
    nav_msgs::msg::OccupancyGrid data;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub;
};
int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Astar_planner>());
    rclcpp::shutdown();
    return 0;
}