#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;

    bool result;

    result = (a == b);
    cout << result<<endl;

    result = (a != b);
    cout << result<< endl;

    result = (a > b);
    cout << result<< endl;

    result = (a < b);
    cout << result<< endl;

    result = (a <= b);
    cout << result<< endl;

    result = (a >= b);
    cout << result<< endl;


    return 0;
}