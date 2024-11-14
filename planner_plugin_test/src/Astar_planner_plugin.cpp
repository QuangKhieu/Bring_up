#include "planner_plugin_test/Astar_planner.hpp"

uint32_t GRID_WIDTH = 0;
uint32_t GRID_HEIGHT = 0;
uint32_t GRID_X = 0;
uint32_t GRID_Y = 0;


ANode::ANode(int x_, int y_):x(x_), y(y_){};

bool ANode::operator==(const ANode& otherANode) const
        {
            return (x == otherANode.x && y== otherANode.y) 
            || std::sqrt(pow((x - otherANode.x),2) + pow((y - otherANode.y),2)) < 0.5;
        } 




bool compared::operator()(const ANode* ANode1, const ANode* ANode2)
{
    return ANode1->f() > ANode2->f();
}


float eulerDis(const ANode* n1, const ANode* n2)
{
    return std::sqrt(pow((n1->x - n2->x),2) + pow((n1->y - n2->y),2));
}

std::vector<ANode*> Astar::findPath(const std::vector<int8_t> &grid, ANode* start, ANode* goal )
{
        std::priority_queue<ANode*, std::vector<ANode*>, compared> openSet;
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
        
        return {};

}
std::vector<ANode*> Astar::getNeighbors( ANode* node)
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
std::vector<ANode*> Astar::reconstructPath(ANode* current)
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