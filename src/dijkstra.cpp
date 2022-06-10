#include "dijkstra.hpp"
#include <iostream>
#include <limits>
using namespace std;

dijkstra::dijkstra(node beginNode, node endNode, vector<node> nodes){
    this->beginNode = beginNode;
    this->endNode = endNode;
    this->nodes = nodes;
}

void dijkstra::RouteCalculator(){
    vector<connection> route;
    vector<connection> vec;
    int count = 0;
    int connectionIDX = 0;
    int tempWeight = std::numeric_limits<int>::max();
    for (auto & v : beginNode.getConnections()){
        vec.insert(vec.begin(), v);
    }
    
    for (auto & v : vec){
        count += 1;
        if (v.getWeigth() < tempWeight){
            connectionIDX = count - 1;
            tempWeight = v.getWeigth();
        }


        if (vec.size() == count){
            connection connect = vec[connectionIDX];
            
            route.insert(route.begin(), connect);
            vec.erase(vec.begin()+ connectionIDX);
            connect.getID_B();

            for (auto& n : nodes){
                if (n.getID() == connect.getID_B()){
                    n.setCombinedWeight(n.getCombinedWeight() + connect.getWeigth());
                    // cout << n.getCombinedWeight();
                    // kiest de juiste node
                    for (auto & c : n.getConnections()){
                        // kijkt of een connection als is gebruikt
                        if (c.getID() != connect.getID())
                            vec.insert(vec.begin(), c);
                    }
                }
            }

        }
        
    }
    int x = 0;
    int y = std::numeric_limits<int>::max();
    for (auto & i : vec){
        x += 1;
        int weight = i.getWeigth();
        for (auto& h : route){
            if (i.getID_A() == h.getID_B())
            for (auto& u : nodes){
                if (u.getID() == h.getID_B()){
                    weight = i.getWeigth() + u.getCombinedWeight();
                }
            }
        }
        

        if (weight < y){
            connectionIDX = x - 1;
            y = weight;
            
        }

        if (vec.size() == x){
            connection connect = vec[connectionIDX];
            route.insert(route.begin(), connect);
            vec.erase(vec.begin()+ connectionIDX);
            connect.getID_B();

            for (auto& n : nodes){
                if (n.getID() == connect.getID_B()){
                   cout << n.getID(); 
                    n.setCombinedWeight(y);
                    // cout << n.getCombinedWeight();
                    // kiest de juiste node
                    for (auto & c : n.getConnections()){
                        // kijkt of een connection als is gebruikt
                        // cout << c.getID() << "\n";
                        if (c.getID() != connect.getID())
                            vec.insert(vec.begin(), c);
                    }
                }
            }
        }

    }

    for (auto a : route){
        if (a.getID_B() == endNode.getID()){
            cout << "done";
        }
    }

    // for (auto& k : vec){
    //     cout << k.getID() << "\n";
    // }
}