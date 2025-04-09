#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a, b, c;
    cout << "Enter quadratic coefficients : ";
    cin >> a >> b >> c;
    if (a!=0 && (b*b - (4*a*c) > 0)) {
        double radical = sqrt(b*b - (4*a*c));
        double root1 = (-b + radical) / (2*a);
        double root2 = (-b - radical) / (2*a);
        cout << "Roots: " << root1 << " " << root2 << endl;
    } else {
        cout << "Does not have wo real roots." << endl;
    }
    return 0;
}