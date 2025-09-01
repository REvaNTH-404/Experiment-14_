#include <iostream>
#include <string>
using namespace std;

// Base class
class Food{
public:
    string Cuisine = "Indian";
    void type() {
        cout << "Asian" << endl;
    }
};

class Dish : public Food {
public:
    string dish = "Biryani";
    
};


class Restraunt : public Dish {
public:
    string name = "Spice Kitchen";   
};

int main() {
    Restraunt f2;
    f2.type();
    cout << f2.Cuisine << ":" <<f2.dish<<endl;
    cout << "Restaraunt:" << f2.name;
    return 0;
}


//output
Asian
Indian:Biryani
Restaraunt:Spice Kitchen
