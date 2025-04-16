#include <iostream>
using namespace std;

void firstCall() {
    cout << "Printing this procedure first. \n";
}

void secondCall() {
    cout << "Printing this procedure second. \n";
}

int main() {
    cout << "Entering the main routine. \n";
    firstCall();
    secondCall();
    cout << "Leaving the routine. \n";
    cout << "Bye! \n";
    return 0;
}