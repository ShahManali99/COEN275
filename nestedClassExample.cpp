#include <iostream>
using namespace std;

class outer {
    private:
        int x = 2;
        class inner {
            private:
                int y;
            public:
                int z;
                void display() {
                    y = 3;
                    z = 2;
                    cout << "The product of " << y << "*" << z << "=" << y*z <<endl;
                }
        };
    public:
        inner n1;
        void square() {
            n1.display();
            n1.z = 4;
            cout << "The product of " <<n1.z<<'*'<<n1.z<<"= "<<n1.z*n1.z<<endl;
            cout<<"The product of " <<x<<'*'<<x<<"= "<<x*x << endl;
        }
};

int main () {
    outer o;
    o.square();
    return 0;
}