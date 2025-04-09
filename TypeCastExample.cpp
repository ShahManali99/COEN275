#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int intVar = 3;
    float floatVar = 4.5;
    cout << "float(intvar) = " << fixed << setprecision(2) << float(intVar) << endl;
    cout << "int(floatvar) = " << int(floatVar) << endl;
    return 0;
}