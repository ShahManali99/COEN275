#include <iostream>
#include <string>
using namespace std;
class Book {
    private:
        string title;
        string author;
        float price;
    public:
        void input( string T, string a, float p) {
            title = T;
            author = a;
            price = p;
        }
        void display() {
            cout << title << ", " << author << ", $" << price << endl;
        }
};
class BankAccount {
    private:
        double balance;
    public:
        BankAccount(double b) : balance(b) {}
        void deposit(double amt) {
            balance += amt;
        }
        void withdraw(double amt) {
            balance -= amt;
        }
        void display() {
            cout << "Balance: $" << balance << endl;
        }
};
class Rectangle{
    double length;
    double breadth;
    public:
        Rectangle(double l, double b) : length(l), breadth(b) {}
        double perimeter() {
            return 2*(length+breadth);
        }
        double area() {
            return length * breadth;
        }
};
class Movie {
    string name;
    string genre;
    string rating;
    public:
        Movie(string n, string g, string r) : name(n), genre(g), rating(r) {}
        bool isPG() {
            return rating=="PG";
        }
};
class ComplexNumber {
    private:
        float real;
        float imag;
    public:
        ComplexNumber(float r, float i) : real(r), imag(i) {}
        ComplexNumber add(ComplexNumber other) {
            float a, b;
            a = this->real + other.real;
            b = this->imag + other.imag;
            return ComplexNumber(a,b);
        }
        void display() {
            cout << "Real : " << real << " & Imaginary : " << imag << endl;
        }
};
class Date {
    private:
        int day, month, year;
    public:
        Date(int d, int m, int y) : day(d), month(m), year(y) {}
        bool isValid() {
            return 1 <= day && day <= 31 && 1 <= month && month <= 12; 
        }

};
int main() {
    Date d1(9,9,1999);
    cout << d1.isValid();
    // ComplexNumber c1(2,3);
    // ComplexNumber c2(3,5);
    // c1.add(c2).display();
    // Book b1;
    // b1.input("2 states", "Chetan Bhagat", 25);
    // b1.display();
    // BankAccount acc1(45000);
    // acc1.deposit(700);
    // acc1.withdraw(15000);
    // acc1.display();
    // Rectangle r(5,3);
    // cout << "Perimeter of rectangle = " << r.perimeter() << endl;
    // cout << "Area of rectangle = " << r.area() << endl;
    // Movie m1("Raid", "suspense", "PG");
    // cout << m1.isPG();

}