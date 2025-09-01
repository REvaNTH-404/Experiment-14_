#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string company = "Ford";
    
    void type() {
        cout << "Mustang" << endl;
    }
};

class Specs {
public:
    string mileage = "8 Kmpl";
    
    void color() {
        cout << "Grey" << endl;
    }
};

// Derived class
class Car : public Vehicle, public Specs {
public:
    string seater = "4 seater";   
};

int main() {
    Car f2;
    f2.color();
    cout << f2.company << " ";
    f2.type();
    cout << "(" << f2.seater << ")" << endl << "Mileage: " << f2.mileage << endl;
    f2.color();  
    
    return 0;
}
