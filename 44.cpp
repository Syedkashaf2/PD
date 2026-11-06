#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int year;
    int topSpeed;

public:
    // OLD WAY (Assignment inside curly braces):
    // First creates an empty string 'brand', then overwrites it with 'b' (2 steps).
    /*
    Car(string b, int y, int ts) {
        brand = b;
        year = y;
        topSpeed = ts;
    }
    */

    // NEW MODERN WAY (Member Initializer List — after the colon ':'):
    // Directly initializes brand with b, year with y, and topSpeed with ts the exact moment they are created in memory (1 fast step)!
    Car(string b, int y, int ts) : brand(b), year(y), topSpeed(ts) {
        // The body can be completely empty!
    }

    void printCar() const {
        cout << brand << " (" << year << ") - " << topSpeed << " km/h\n";
    }
};

int main() {
    Car c1("Lambo", 2026, 320); // Automatically calls Car("Lambo", 2026, 320)!
    c1.printCar();
    return 0;
}