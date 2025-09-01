#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand = "Ford";
    
    void color() {
        cout << "Red!\n";
    }
};

// Derived class
class Car : public Vehicle {
public:
    string model = "Mustang";
};

int main() {
    Car myCar;
    cout << "Brand: " << myCar.brand << endl;
    cout << "Model: " << myCar.model << endl;
    myCar.color(); // Call base class function
    return 0;
}

