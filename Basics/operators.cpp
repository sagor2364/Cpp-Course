#include<iostream>
using namespace std;

int main(){

    int a = 5, b = 2;
    cout << "a + b = " << (a+b)<< endl;
    cout << "a - b = " << (a-b)<< endl;
    cout << "a * b = " << (a*b)<< endl;
    cout << "a / b = " << (double)(a/b)<< endl;
    cout << "a % b = " << (double)(a%b)<< endl;

    // increament 

    int a1 = 5;
    a1++;
    cout << "a1 = " << a1 << endl;

    double a3 = 10;
    a3--;
    cout << "a3 = " << a3;
    

    return 0;
}