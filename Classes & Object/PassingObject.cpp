// Passing object to the function

#include <iostream>
using namespace std;

class Student{

    public: 
    double marks;

    // constructor

    void student(double number){
        marks = number;
    }
};

void calAvg(Student student1, Student student2){
    double avg = (student1.marks + student2.marks) / 2;

    cout << "S1 = " << student1.marks << endl;
    cout << "S2 = " << student2.marks << endl;
    cout << "Avg = " << avg << endl;
}

int main(){

    Student s1, s2;

    s1.marks = 4;
    s2.marks = 5;

    calAvg(s1, s2);

    return 0;
}