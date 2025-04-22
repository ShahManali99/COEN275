#include <iostream>
using namespace std;

int addition(int a, int b){
    return a+b;
}

int subtraction(int a, int b) {
    return a-b;
}

int operation(int a, int b, int (*functionCall)(int, int)){
    return (*functionCall)(a,b);
}

int main() {
    int (*minus)(int, int) = subtraction;
    int m = operation(4,5,addition);
    int n = operation(m,3,minus);
    cout << n <<endl;
    return 0;
}