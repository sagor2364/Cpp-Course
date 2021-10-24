#include <iostream>
#include <cmath>
using namespace std;

int sum();
int sum(int, int);

int main(){
    int base = 5;
    int ans;

    ans = pow(base,2);

    cout << ans << endl;

    int a = 1, b = 2;

    cout<< sum(a, b) << endl;

    cout << sum() << endl;
}

int sum (){
    int a = 11; int b = 112;
    return (a + b);
}

int sum (int a, int b){
    return (a + b);
}