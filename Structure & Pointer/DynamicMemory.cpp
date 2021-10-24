#include <iostream>
using namespace std;

int main(){

    int* pointInt;
    float* pointFloat;

    pointInt = new int;
    pointFloat = new float;

    *pointInt = 99;
    *pointFloat = 97.99f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    delete pointInt;
    delete pointFloat;

    return 0;
}