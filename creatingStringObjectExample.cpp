#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    string s2("Manali");
    string s3("Shah");

    s1 = s2;
    cout << "s1 = " << s1 << endl;

    s1 = "It's a beautiful day";
    cout << "Now s1 = " << s1 << endl;

    string s4(s1);
    cout << "s4 = " << s4 << endl;

    cout << "Enter a string : ";
    cin >> s4;
    cout << "Now s4 = " << s4 << endl;

    s1 = s2 + s3;
    cout << "Finally s1 = " << s1 << endl;

    return 0;
}