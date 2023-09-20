#include <iostream>
using namespace std;

int main() {
    float PI = 3.14159;
    int radius;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    

    int diameter = 2 *(radius);
   
    int  circumference = 2 * PI *(radius);
    
    
    int  area = PI *(radius) * (radius);
    
    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
    
    return 0;
}
