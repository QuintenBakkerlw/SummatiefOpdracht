#include "node.hpp"
#include <iostream>
using namespace std;

node::node(int ID, string Name, vector<connection> connections, bool beenThere, int combinedWeight){
    this->ID = ID;
    this->Name = Name;
    this->connections = connections;
    this->beenThere = beenThere;
    this->combinedWeight = combinedWeight;
}
node::node(){
    
}

void node::setCombinedWeight(int combinedWeight){
    this->combinedWeight = combinedWeight;

}
int node::getCombinedWeight(){
    return combinedWeight;
}

int node::getID(){
    return ID;
}

string node::GetName(){
    return Name;
}

void node::setConnections(vector<connection> connections){
    this->connections = connections;
}
vector<connection> node::getConnections(){
    return connections;
}

void node::setBeenThere(bool beenThere){
    this->beenThere = beenThere;
}

bool node::getBeenThere(){
    return beenThere;
}

void node::ShowConnetions(){
    for (auto & v : connections){
        cout << v.getID_A() << "-" << v.getID_B() << "\n";
    }
    return;
}
