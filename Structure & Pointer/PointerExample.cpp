#include <iostream> 
using namespace std;

void set(int *px);

int main(){

    int x = 1;
    cout << x << endl;

    set(&x);

    cout << x;

    return 0;
}

void set(int *px){
    *px = 5;
}