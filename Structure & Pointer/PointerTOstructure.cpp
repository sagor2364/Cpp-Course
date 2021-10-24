#include <iostream>
using namespace std;

struct Distance{
    double feet; // feet
    double inch;
};

int main(){

    Distance *ptr, d;

    ptr = &d;

    cin >> (*ptr).feet;
    cin >> (*ptr).inch;


    cout << "Distance" << endl;
    cout << (*ptr).feet << endl;
    cout << (*ptr).inch << endl;


    return 0;
}