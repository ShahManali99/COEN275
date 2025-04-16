#include <iostream>
using namespace std;

int main() {
    int num1 = 5, num2 = 3;
    int *p1, *p2;
    p1 = &num1;
    p2 = &num2;
    *p1 = 10; //num1 = 10
    *p2 = *p1; //num2 = 10
    p1 = p2; //p1 = &num2
    *p1 = 20; //num2 = 20

    cout << "Num1 is " << num1 << '\n';
    cout << "Num2 is " << num2 << '\n';

    return 0;
}