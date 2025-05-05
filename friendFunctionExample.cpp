#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle() {}
        Rectangle(int w, int h) : width(w), height(h) {}
        int area() { return width * height; }
        friend Rectangle duplicate(const Rectangle& other);
};

Rectangle duplicate(const Rectangle& other) {
    Rectangle res;
    res.width = 2*other.width;
    res.height = 2*other.height;
    return res;
}

int main () {
    Rectangle foo;
    Rectangle bar(2,5);
    foo = duplicate(bar);
    cout << foo.area();
    return 0;
}