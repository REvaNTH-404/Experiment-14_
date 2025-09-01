#include <iostream>
#include <string>
using namespace std;

// Base class
class Jeans{
public:
    string type[3] = {"Bootcut", "Wide leg" , "Skinny"};
    void brand() {
        cout << "H&M -&Denim"<< endl;
    }
};

class Bootcut : public Jeans {
public:
    string color = "Dark Blue";
    
};


class WL: public Jeans {
public:
    string color = "Black";
};

class Skinny: public Jeans {
public:
    string color = "Grey";
};

int main() {
    Bootcut f1;
    cout<<endl;
    f1.brand();
    cout << f1.type[0]<<":"<<f1.color<<endl;
    
    WL f2;
    cout<<endl;
    f2.brand();
    cout << f2.type[1]<<":"<<f2.color<<endl;
    
    Skinny f3;
    cout<<endl;
    f3.brand();
    cout << f3.type[2]<<":"<<f3.color<<endl;
    
    return 0;
}
