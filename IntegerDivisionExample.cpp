#include <iostream>
using namespace std;

int main () {
    int s1, s2, s3;
    cout << "Please enter your last three scores : "; 
    cin >> s1 >> s2 >> s3;
    double avg = (s1+s2+s3) /3;
    cout << "FIRST - Your average score is " << avg << endl;

    double avg2 = (s1+s2+s3) /3.0;
    cout << "SECOND - Your average score is " << avg2 << endl;    
    return 0;
}