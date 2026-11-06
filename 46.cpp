#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Database
{
    string dbName;
    int connectionID;

  public:
    Database() : dbName("LocalDB"), connectionID(0)
    {
        cout << "Connected to Default DB\n";
    }

    Database(string name, int id) : dbName(name)
    {
        name = name;
        connectionID = id;
        cout << "Connected to " << dbName << '\n';
    }

    void closeConnection();
};

void Database::closeConnection()
{
    connectionID = -1;
    cout << "Connection manually closed.\n";
}

int main()
{
    Database myDB;

    Database serverDB("CloudSDB", 404);

    myDB.closeConnection();
    return 0;
}
