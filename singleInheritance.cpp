#include <iostream>
using namespace std;

class Base {
    int a;
    public:
        int b;
        void setAB(int A, int B) {
            a = A;
            b = B;
        }
        int getA() { return a; }
        void showA() {
            cout << "a = " << a << endl;
        }
};

class Derived : public Base {
    int c;
    public:
        void mul() {
            c = b * getA();
        };
        void display() {
            cout << "a = " << getA() << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
        }
};

int main () {
    Derived d;
    d.setAB(3,4);
    d.mul();
    d.display();

    d.b=20;
    d.mul();
    d.display();
    return 0;
}