#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void setRoll_no(int roll_num) { roll_no = roll_num; }
        void show_number(){
            cout << "Roll number: " << roll_no << endl;
        }
};
class Test: public Student {
    protected:
        float marks_for_test1;
        float marks_for_test2;
    public:
        void setMarks(float marks1, float marks2) {
            marks_for_test1 = marks1;
            marks_for_test2 = marks2;
        }
        void show_marks() {
            cout << "Marks Obtained: " << endl;
            cout << "Test 1: " << marks_for_test1 << endl;
            cout << "Test 2: " << marks_for_test2 << endl;
        }
};
class Sports {
    protected:
        float score;
    public:
        void setScore(float s) { score = s; }
        void showScore() { cout << "Sports score: " << score << endl; }
};

class Result: public Test, public Sports {
    protected:
        float total;
    public:
        void show(){
            total = marks_for_test1 + marks_for_test2 + score;
            cout << "Total : " << total << endl;
            show_number();
            show_marks();
            showScore();
        }
};

int main () {
    Result student1;
    student1.setRoll_no(9);
    student1.setMarks(99,76);
    student1.setScore(95);
    student1.show();
    return 0;
}