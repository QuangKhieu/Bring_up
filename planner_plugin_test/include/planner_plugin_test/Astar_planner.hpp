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




class ANode
{
    public:
        ANode(int x_, int y_);
        int x, y; //courdinate;
        ANode* parent = nullptr;
        float g = std::numeric_limits<float>::infinity();
        float h = std::numeric_limits<float>::infinity();
        float f() const {return (g + h);};

        bool operator==(const ANode& otherANode) const;


    private:
};


struct compared
{
    bool operator()(const ANode* ANode1, const ANode* ANode2);
};

float eulerDis(const ANode* n1, const ANode* n2);


class Astar
{
    public:
    std::vector<ANode*> findPath(const std::vector<int8_t> &grid, ANode* start, ANode* goal );



    std::vector<ANode*> getNeighbors(ANode* node);


    std::vector<ANode*> reconstructPath(ANode* current);

    private:

};