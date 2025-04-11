#include <iostream>
using namespace std;

inline float mul(float a, float b) {
    return a*b;
}
inline float div(float a, float b) {
    return a/b;
}

int main () {
    float a=4.23, b=3.5;
    cout << mul(a, b) << endl;
    cout << div(a, b) << endl;
    return 0;
}