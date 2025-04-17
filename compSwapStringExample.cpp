#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1("First");
    string s2("Second");
    string s3("Third");
    cout << "s1 = " << s1 << " s2 = " << s2 << " s3 = " << s3 << endl;

    int x = s1.compare(s2);
    if (x==0) { cout << "s1 and s2 are equal. (s1==s2)" << endl; }
    else if (x<0) { cout << "s2 is bigger. (s1<s2)" << endl; }
    else { cout << "s1 is bigger. (s1>s2)" << endl; }

    int a = s2.compare(0,2,s1,0,2);
    cout << "a = " << a << endl;

    cout << "Before: s1 = " << s1 << " s2 = " << s2 << endl;
    s1.swap(s2); // swap s1 and S2
    cout << "After: s1 = " << s1 << " s2 = " << s2 << endl;

    return 0;
}