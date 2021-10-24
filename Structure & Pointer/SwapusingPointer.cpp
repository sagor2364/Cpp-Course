#include <iostream>
using namespace std;

void swapNum(int* , int*);

int main(){
    int a = 1, b = 2;
    cout << a << " " << b << endl;
    
    swapNum(&a, &b);
    cout << a << " " << b << endl;
    return 0;	
}

void swapNum(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}