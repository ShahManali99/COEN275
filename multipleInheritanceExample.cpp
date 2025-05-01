#include <iostream>
using namespace std;

class A {
    protected:
        int a;
    public:
        void setA(int p) { a=p; }
};

class B {
    protected:
        int b;
    public:
        void setB(int q) { b=q; }
};

class C: public A, public B {
    public:
        void display() {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
            cout << "a*b: " << a*b << endl;
        }
};

int main () {
    C c;
    c.setA(2);
    c.setB(4);
    c.display();
    return 0;
}