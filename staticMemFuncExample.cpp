#include <iostream>
using namespace std;

class Test {
    int code;
    static int count;
    /* Static variables are initialized only once , at the start of the execution. 
    These variables will be initialized first, before the initialization of any instance variables. 
    They can be accessed directly by the class name and is shared by all instances of the class.
    */
    public:
        void setCode () {
            code = ++count;
        }

        void showCode () {
            cout << "object number: " << code << endl;
        }

        static void showCount () {
            cout << "count : " << count << endl;
        }
};
int Test:: count; // We can initaize it here as well eg: int test:: count = 0;

int main () {
    Test t1, t2;
    t1.setCode();
    t2.setCode();
    Test::showCount();
    Test t3;
    t3.setCode();
    Test::showCount();
    t1.showCode();
    t2.showCode();
    t3.showCode();
    return 0;
}