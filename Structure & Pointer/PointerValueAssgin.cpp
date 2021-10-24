#include <iostream>
using namespace std;

int main(){
    int *intVar;
    int var = 5;

    intVar = &var; // assgining the value hash at intVar

    cout << &var << endl; //address of var
    cout << var << endl;

    cout << "Pointer :" << endl;
    cout << intVar << endl; // printing the address 
    cout << *intVar << endl; // print the variable value


    // change value at address intVar
    *intVar = 1;
    cout << "After updating Pointer :" << endl;
    cout << intVar << endl; // printing the address 
    cout << *intVar << endl; // print the variable value

    // var value will be same as the pointer assinging value 
    cout << &var << endl; //address of var
    cout << var << endl;

}