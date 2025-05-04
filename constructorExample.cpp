#include <iostream>
using namespace std;
class Box {
    public:
        Box() {
            cout << "Default Constructor called" << endl;
        }
        explicit Box(int i) : length(i), width(i), height(i) {}
        Box(int l, int w, int h) : length(l), width(w), height(h) {}
        int volume() { return length * width * height; }
    private:
        int width{ 0 };
        int length{ 0 };
        int height{ 0 };
};

int main() {
    Box b1;
    cout << b1.volume() << endl;
    Box b2(2,3,5);
    cout << b2.volume() << endl;
    Box b3(5);
    cout << b3.volume() << endl;
    Box boxes[3] {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << boxes[0].volume();
    return 0;
}