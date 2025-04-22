#include <iostream>
#include <string>
using namespace std;

int main () {
    int i;
    char str[25];
    char* ptr[10] = {"books", "tv", "sports", "laptops"};
    cout << "Enter your favorite leisure pursuit: ";
    cin >> str;
    for(i=0; i<4; i++) {
        if(!strcmp(str, ptr[i])) { //if returns 0 that means both are equal
            cout << "Your favorite pursuit is available here." << endl;
            break;
        }
    }
    if(i==4) {
        cout << "Your favorite pursuit is not avaible here." << endl;
    }
    return 0;
}