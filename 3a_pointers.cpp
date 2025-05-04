#include <iostream>
#include <string>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

class Book {
    public:
        string title;
        Book(string t) : title(t) {}
        void show() {
            cout << title << endl;
        }
};

int main() {
    Book* b1 = new Book("Hello");
    b1->show();
    delete b1;
    // int a = 5, b = 10;
    // swap(&a, &b);
    // cout << a << "  " << b << endl;
    // int x = 10;
    // int *p = &x;
    // cout << x << "   " << *p << endl;
}