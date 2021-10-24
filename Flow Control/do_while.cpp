#include <iostream>
using namespace std;

int main(){
    
    int number;
    cin >> number;
    int sum = 0;

    do{
        cin>> number;
        sum = sum + number;
    } while(number >= 0);
    
    cout << sum << endl;

    return 0;
}