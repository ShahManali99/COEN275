#include <iostream>
using namespace std;

int area (int num) {
    return num*num;
}

int area (int num1, int num2) {
    return num1*num2;
}

float area (float num) {
    return 3.14*num*num;
}

int main () {
    cout << "Area of square with side 5cm is " << area(5) << "cm." << endl;
    cout << "Area of rectangle with sides 10cm and 5cm is " << area(5, 10) << "cm." << endl;
    cout << "Area of circle with radius 4.5 cm is " << area(float(4.5)) << "cm." << endl;
    return 0;
}