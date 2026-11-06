#include <iostream>
using namespace std;

class TaskTracker
{
    string task_name;
    int steps_completed;

  public:
    TaskTracker(string name) : task_name(name), steps_completed(0)
    {
        cout << "Starting: " << task_name << '\n';
    }

    void completeStep()
    {
        steps_completed++;
    }

    ~TaskTracker()
    {
        cout << "Finished: " << task_name << " with " << steps_completed << " steps\n";
    }
};

int main()
{
    TaskTracker t1("Build");
    t1.completeStep();

    return 0;
}
