#include <iostream>
using namespace std;

//global var
int m = 10;

int main () {
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout << "Inner block values for k = " << k << " & m = " << m << endl;
        cout << "::m = " << ::m << endl; 
    }
    cout << "Outer block value for m = " << m << endl;
    cout << "::m = " << ::m << endl;
    return 0;
}