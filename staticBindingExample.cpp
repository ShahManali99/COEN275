#include <iostream>
using namespace std;

class ComputeSum {
    public:
        int add(int x, int y) {
            return x + y;
        }
        int add(int a, int b, int c) {
            return a+b+c;
        }
};

int main () {
    ComputeSum obj;
    cout << "Sum of 2 numbers : " << obj.add(3,5) << endl;
    cout << "Sum of 3 numbers : " << obj.add(2,5,8) << endl;
    return 0;
}