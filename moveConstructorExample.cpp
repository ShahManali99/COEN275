#include <iostream>
#include <vector>
using namespace std; 

class A{
    int *ptr;
    public:
        A() { 
            ptr = new int;
            cout << "Calling Default constructor\n";
        }
        A(const A& other) {
            ptr = new int(*other.ptr);
            cout << "Calling Copy constructor\n";
        }
        A(A&& other) {
            ptr = other.ptr;
            other.ptr = nullptr;
            cout << "Calling Move constructor\n";
        }
        ~A() { 
            delete ptr;
            cout << "Calling Destructor\n";
        }      
};

int main() {
    vector<A> vec;
    vec.push_back(A());
}