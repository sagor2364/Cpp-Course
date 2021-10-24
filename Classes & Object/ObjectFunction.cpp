// Return Object from a Function
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
};

// student class funciton 
Student createStudent(string name, int roll){
    Student student;

    student.name = name;
    student.roll = roll;

    cout << student.name << endl;
    cout << student.roll << endl;

    return student;
}

// by defult name and roll is set
Student createStudent(){
    Student student;

    student.name = "name";
    student.roll = 1;

    cout << student.name << endl;
    cout << student.roll << endl;

    return student;
}

int main (){

    Student student1;

    student1 = createStudent("Sagar", 1); // user input name and roll

    // new object
    Student student2;
    student2 = createStudent(); // by defult name and roll

    return 0;
}