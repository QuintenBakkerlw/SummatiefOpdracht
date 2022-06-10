#include <string>
#include <vector>
#include "connection.hpp"
using namespace std;
class node{
private:
    int ID, combinedWeight;
    string Name;
    vector<connection> connections;
    bool beenThere;
public:
    node(int ID, string Name, vector<connection> connections, bool beenThere, int combinedWeight);
    node();

    void setCombinedWeight(int combinedWeight);
    int getCombinedWeight();
    int getID();
    string GetName();
    void setConnections(vector<connection> connections);
    vector<connection> getConnections();

    void setBeenThere(bool beenThere);
    bool getBeenThere();

    void ShowConnetions();
};
