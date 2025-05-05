#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        void setValues(int w, int h) {
            width = w;
            height = h;
        }
};
class Rectangle: public Polygon {
    public:
        int area() { return width * height; }
};
class Triangle: public Rectangle {
    public:
        int area() { return 0.5*width*height; }
};

int main () {
    Rectangle r;
    Triangle t;
    Polygon *ptr = &r;
    ptr->setValues(3,5);
    cout << r.area();
    ptr = &t;
    ptr->setValues(2,5);
    cout << t.area();
    return 0;
}