#include <iostream>
using namespace std;

void func(int y) {
    y++;
    cout << y << endl;
    return;
}
int main() {
    int x = 3;
    func(x);
    cout << x << endl;
    return 0;
}