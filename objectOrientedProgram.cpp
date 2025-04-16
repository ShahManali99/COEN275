#include <iostream>
using namespace std;

class myClass {
    public:
        int num;
        string name;
};

int main() {
    myClass obj;
    obj.num = 9;
    obj.name = "Manali";
    cout << obj.num << endl << obj.name << endl;
    return 0;
}