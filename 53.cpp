#include <iostream>
#include <string>
using namespace std;

class Drone
{
    string id;

  public:
    Drone(string s) : id(s)
    {
        cout << "Launch " << id << "\n";
    }
    ~Drone()
    {
        cout << "Land " << id << "\n";
    }
};

void patrol()
{
    Drone d2("D2");
}

int main()
{
    Drone d1("D1");
    patrol();
    {
        Drone d3("D3");
    }
    cout << "Mission Complete\n";
    return 0;
}