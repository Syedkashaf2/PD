#include <iostream>
using namespace std;

class Student   {
    string name{};
    int roll{};
    int marks{};

public:
    Student(string n, int r, int m) : name(n), roll(r), marks(m) {};
    Student() : name("Unknown"), roll(0), marks(0) {};

    void addGraceMarks(int bonus);
    void printReport() {
        cout << name << ' ' << roll << ' ' << marks << '\n';
    }

};

void Student::addGraceMarks (int bonus) {
    marks += bonus;

    if ( marks > 100 ) marks = 100;
}

int main()  {
    Student s1("Kashaf", 81, 92);
    s1.addGraceMarks(15);
    s1.printReport();
    return 0;
}