#include <iostream>
using namespace std;

class Circle {
    private:
        double radius = 0.0;
    public:
        Circle(double r) : radius(r) {}
        Circle() {}
        ~Circle() {}
        Circle(const Circle& other) { radius = other.radius; }
        void setRadius(double r) { radius = r; }
        double getRadius() { return radius; }
        double getArea() { return 3.14*radius*radius; }
        double getPerimeter() { return 2*3.14*radius; }
};
int main() {
    Circle c1(5.2); // Parameter Constructor
    cout << "Radius= " << c1.getRadius() << endl;
    cout << "Area =  " << c1.getArea() << endl;
    cout << "Perimeter = " << c1.getPerimeter() << endl << endl;

    Circle c2(c1); // Copy Constructor
    cout << "Radius= " << c2.getRadius() << endl;
    cout << "Area =  " << c2.getArea() << endl;
    cout << "Perimeter = " << c2.getPerimeter() << endl << endl;

    Circle c3;
    cout << "Radius= " << c3.getRadius() << endl;
    cout << "Area =  " << c3.getArea() << endl;
    cout << "Perimeter = " << c3.getPerimeter() << endl << endl;
    return 0;
}