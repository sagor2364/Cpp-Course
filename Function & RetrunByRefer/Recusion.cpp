// Factorial program

#include <iostream>
using namespace std;

int factorial(int);

int main(){

    int num = 5;
    
    cout << factorial(num) << endl;

    return 0;
}

int factorial(int n){
    if(n > 1){
        return n * factorial(n - 1);	
    }else{
        return 1;
    }
}