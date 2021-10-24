#include <iostream>
using namespace std;

int main(){

    float result;
    cout << "Enter your grade:" << endl;
    cin >> result;
    // cout << " " << endl;

    if (result >= 90 && result <= 100){
        cout << "A+";
    }
    else if (result >= 80 && result <=89.99){
        cout<< "A" << endl;
    }
    else{
        cout << "A-";
    }


    return 0;
}