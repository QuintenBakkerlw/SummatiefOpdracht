#include <vector>
#include "node.hpp"
class dijkstra{
private:
    node beginNode, endNode;
    vector<node> nodes;
public:
    dijkstra(node beginNode, node endNode, vector<node> nodes);
    void RouteCalculator();

};


