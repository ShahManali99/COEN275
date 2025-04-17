#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b) {
    return a>b?a:b;
}

int main()
{
    int m = 5, n=6;
    int x=10, y=8;
    int p = GetMax<int>(m,n);
    long q = GetMax<long>(x,y);
    cout << p << endl << q << endl;
    return 0;
}