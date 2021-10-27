#include <iostream>
using namespace std;

int main(){
    float num1 = 20, num2 = 5;
    float sum, diff, mult, div;

    float *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;
    diff = *ptr1 - *ptr2;
    mult = *ptr1 * *ptr2;
    div = *ptr1 / *ptr2;

    cout << sum << endl;
    cout << diff << endl;
    cout << div << endl;
    cout << mult << endl;
}