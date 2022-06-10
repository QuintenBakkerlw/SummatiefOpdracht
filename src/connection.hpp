#include <string>
using namespace std;
class connection
{
private:
    int ID_A, ID_B, weight;
    string id;
public:
    connection(string id, int ID_A, int ID_B, int weight);
    string getID();
    int getID_A();

    int getID_B();

    int getWeigth();
};


