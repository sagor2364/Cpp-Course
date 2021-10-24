#include <iostream>
using namespace std;

int main(){
    int a[3];
    int *pointer;

    for(int i = 0; i < 3; i++){
        cout << &a[i] << endl; // each of element has differ in last 4 bytes
    }

    pointer = a;

    cout << "After pointer assgine to array the address will be: " << endl;

    for(int i = 0; i < 3; i++){
        cout << pointer + i << endl; // each of element has
    }

    // user input to output using pointer

    cout << "Please enter number : " << endl;

    int array[3];
    int *aPointer;

    for(int i = 0; i < 3; i++){
        cin >> *(array + i); // as same as cin >> array[i]
    }

    cout << "After enterning the array values: " << endl;	
    for(int i = 0; i < 3; i++){
        cout << *(array + i) << endl; // each of element
    }
}0