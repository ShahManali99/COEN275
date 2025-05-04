#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void setRollNo(int roll_num) { roll_no = roll_num; }
        void showRollNo() {
            cout << "Roll number: " << roll_no << endl;
        }
};

class Test: public virtual Student {
    protected:
        float marks1, marks2;
    public:
        void setMarks(float m1, float m2) {
            marks1 = m1;
            marks2 = m2;
        }
        void showMarks() {
            cout << "Marks Obtained: " << endl;
            cout << "Marks 1: " << marks1 << endl;
            cout << "Marks 2: " << marks2 << endl;
        }
};

class Sports: public virtual Student {
    protected:
        float score;
    public:
        void setScore(float s) { score = s; }
        void showScore() {
            cout << "Sports score: " << score << endl;
        }
};

class Result: public Test, public Sports {
    float total;
    public:
        void show() {
            total = marks1 + marks2 + score;
            showRollNo();
            showMarks();
            showScore();
            cout << "Total Score: " << total << endl;
        }
};

int main () {
    Result student1;
    student1.setRollNo(9);
    student1.setMarks(99,76);
    student1.setScore(80);
    student1.show();
    return 0;
}