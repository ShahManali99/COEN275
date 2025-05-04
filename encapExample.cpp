#include <iostream>
using namespace std;

class Employee {
    int salary;
    public:
        int getSalary() { return salary; }
        void setSalary(int s) { salary = s; }
};

int main () {
    Employee e;
    e.setSalary(50000);
    cout << e.getSalary() << endl;
    return 0;
}