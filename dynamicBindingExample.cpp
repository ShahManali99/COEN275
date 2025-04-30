#include <iostream>
using namespace std;

class Base {
    public:
        virtual void f() {
            cout << "Base class called." << endl;
        }

};

class Derived: public Base {
    public:
        void f() {
            cout << "Derived class called." << endl;
        }
};
int main () {
    Base b;
    Derived d;
    Base* base_ptr = &b;
    base_ptr->f();
    base_ptr = &d;
    base_ptr->f();
    return 0;
}