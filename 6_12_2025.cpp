/* Name: Joseph Mwangi
   REGISTRATION NO: BBIT-01-0022/2025
   Cylinder Surface area and volume */


#include <iostream>
using namespace std;

class Cylinder {
public:
    double radius;
    double height;
    const double pi = 3.142;  

    double volume() {
        return pi * radius * radius * height; 
    }

    double surface_area() {
        return 2 * pi * radius * radius + 2 * pi * radius * height; 
    }
};

int main() {
    Cylinder cyl;


    cout << "Enter radius: ";
    cin >> cyl.radius;

    cout << "Enter height: ";
    cin >> cyl.height;

 
    double surfaceArea = cyl.surface_area();  
    double volume = cyl.volume();

    
    cout << "Surface area: " << surfaceArea << endl;
    cout << "Volume: " << volume << endl;

    return 0;
}

