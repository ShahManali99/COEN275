#include <iostream>
#include <ncurses.h>
using namespace std;

long fact (int num) {
    if (num == 1 || num == 0) {
        return num;
    } else {
        return num * fact(num-1);
    }
}

int main () {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    cout << "Factorial of number " << num << " is " << fact(num) << endl;
    return 0;
}
