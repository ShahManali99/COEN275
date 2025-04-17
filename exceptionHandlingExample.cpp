#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter a number : ";
    cin >> num1;
    cout << "Enter another number : ";
    cin >> num2;
    try {
        if (num2==0) { throw 0; }
        int result = num1 / num2;
        cout << "The result is : " << result << endl;
    } catch (int x) {
        cout << "A number can't be divided by 0." << endl;
    }
    return 0;
}