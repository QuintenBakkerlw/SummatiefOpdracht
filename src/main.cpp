#include <iostream>
#include "dijkstra.hpp"
using namespace std;

int main(){
    connection C1 = connection("C1",1,2,5);
    connection C2 = connection("C2",1,3,20);
    connection C3 = connection("C3",2,3,3);
    connection C4 = connection("C3",3,4,4);
    node N1 = node(1, "New York", {C1, C2}, false, 0);
    node N2 = node(2, "LA", {C1, C3}, false, 0);
    node N3 = node(3, "Calarodo",{C2, C3, C4}, false, 0);
    node N4 = node(4, "Londen", {C4}, false, 0);
    
    dijkstra D1 = dijkstra(N1, N3, {N1,N2,N3,N4});
    D1.RouteCalculator();
    /// Tester ///
    // cout << N1.GetName() << "\n" << N1.getID() << "\n";   
    // N1.ShowConnetions();
    // cout << C1.getWeigth();
    //////////////



return 0;
};
