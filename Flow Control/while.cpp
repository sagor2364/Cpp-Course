#include <iostream>
using namespace std;

int main(){
    int number;
    cin>> number;
    int sum = 0;

    while (number >= 0){
        sum = sum + number;
        cin>> number;
    }

    cout << sum << endl;

    return 0;
}