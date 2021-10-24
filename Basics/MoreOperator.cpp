#include <iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 2;
    bool result;

    result = (a==b) && (a<b);
    cout<< result << endl;

    result = !(a==b);
    cout<< result << endl;

    int n1 = 1, n2 = 1;

    result = !(n1==n2);
    cout<< result << endl;

    return 0;
}