#include<iostream>
#include <math.h>
using namespace std;

int main(){

    auto a = 1;
    cout<< a << endl;
    auto str = "Sagar";
    cout<< str << endl;

    //auto z = sqrt(a);
    //cout<< z << endl;

    const double anyNum = 1.2;
    cout << anyNum << endl;
    
    constexpr double any = 1.0;
    double r= sqrt(4);
    double g= pow(4,2);
    cout << g << endl;
    
    return 0;
}