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

void display(Person);
Person getData(Person person); 

int main(){
    Person p1, temp;

    temp = getData(temp);
    p1 = temp;

    display(p1);
}

Person getData(Person person){
    cout << "Enter your name: " << endl;
    cin.get(person.name, 50);

    cout << "Enter your age: " << endl;
    cin>> person.age;

    cout << "Enter your address: " << endl;
    cin.ignore();
    getline(cin, person.address);

    cout << "Enter your name: " << endl;
    cin >> person.number;

    return person;
}

// By calling this function
void display(Person person){
    cout << "Person information: " << endl;
    cout << person.name << endl;
    cout << person.address << endl;
    cout << person.age << endl;
    cout << person.number << endl;
}
