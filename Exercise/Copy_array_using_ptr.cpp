#include <iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    int newArray[5];
    int *ptr1, *ptr2;

    ptr1 = a;
    ptr2 = newArray;

    ptr1 = a;

    a = ptr2;

    newArray = ptr2;   

    for(int i = 0; i < 5; i++){
        cout << newArray[i] <<endl;
    }
}