#include <iostream>
using namespace std;

//works like class in java
struct Person
{
    char name[50];
    int age;
    string address;
    long int number;
};

// By calling this function
void display(Person person){
    cout << "Person information: " << endl;
    cout << person.name << endl;
    cout << person.address << endl;
    cout << person.age << endl;
    cout << person.number << endl;
}


int main(){
    // kind of class in java

    Person p1; // object like java
    cout << "Enter your name: " << endl;
    cin.get(p1.name, 50);
    p1.address = "Dhaka, Bangladesh";
    p1.age = 20;
    p1.number = 12345;

    display(p1); // function called

    /*
    cout << "Person information: " << endl;
    cout << p1.name << endl;
    cout << p1.address << endl;
    cout << p1.age << endl;
    cout << p1.number << endl;
    */
}