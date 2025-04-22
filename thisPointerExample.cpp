#include <iostream>
using namespace std;

class Box {
    double length;
    double breadth;
    double height;
    public:
        Box(double l, double b, double h) {
            length = l;
            breadth = b;
            height = h;
        }
        double volume() {
            return length * breadth * height;
        }
        int compare(Box b){
            return this->volume() > b.volume();
        }
};

int main() {
    Box b1(3.2,2.3,5.6);
    Box b2(4.2,5.4,6.2);
    if (b1.compare(b2)) {
        cout << "Box1 is bigger than Box2." << endl;
    } else {
        cout << "Box2 is equal to or larger than Box1." << endl;
    }
    return 0;
}