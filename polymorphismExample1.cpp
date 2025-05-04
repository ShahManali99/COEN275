#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        virtual void print() { cout << "In base class." << endl; }
};

class Derived: public Base{
    public:
        void print() { cout << "In derived class." << endl; }
};

int main () {
    Base *ptr = new Base();;
    ptr -> print();
    delete ptr;
    ptr = new Derived();
    ptr->print(); 
    delete ptr;
    return 0;
}