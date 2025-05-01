#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void setRoll_no(int roll_num) {
            roll_no = roll_num;
        }
        void showRoll_no() {
            cout << "Roll Number : " << roll_no << endl;
        }
};

class Test: public Student {
    protected:
        float marks_for_sub1;
        float marks_for_sub2;
    public:
        void setMarks(float marks1, float marks2) {
            marks_for_sub1 = marks1;
            marks_for_sub2 = marks2;
        }
        void showMarks() {
            cout << "Marks in sub 1 : " << marks_for_sub1 << endl; 
            cout << "Marks in sub 2 : " << marks_for_sub2 << endl;
        }
};

class Result: public Test {
    float total;
    public:
        void display(){
            total = marks_for_sub1 + marks_for_sub2;
            showRoll_no();
            showMarks();
            cout << "Total = " << total << endl;
        }
};

int main () {
    Result student1;
    student1.setRoll_no(9);
    student1.setMarks(99,76);
    student1.display();
    return 0;
}