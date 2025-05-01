#include <iostream>
using namespace std;

class Person {
    private:
        long id;
    public:
        long getId();
        void setId(long Id);
};

long Person :: getId() {
    return id;
}

void Person :: setId(long Id) {
    id = Id;
}

class Student: public Person {
    private:
        double gpa;
    public:
        void setGpa(double Gpa);
        double getGpa();
};

void Student :: setGpa(double Gpa) {
    gpa = Gpa;
}

double Student :: getGpa() {
    return gpa;
}

int main () {
    Person p;
    p.setId(9999);
    cout << "Person identification number: " << p.getId() << endl;
    Student s;
    s.setId(9930);
    s.setGpa(9.1);
    cout << "Student Identificaiton number: " << s.getId() << endl;
    cout << "Student GPA: " << s.getGpa() << endl;
    return 0;
}