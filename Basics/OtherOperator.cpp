#include <iostream>
using namespace std;

int main(){
    /**
     * @brief This is a inital comment of C++
     * 
     */
    int a=1, b=2;
    unsigned int a1 = 4.2;
    int myNum = 626;

    cout<< sizeof(a1)<< endl;

    string result = (a>b) ? "true" : "false";
    cout<< result<<endl;

    string result2 = (a!= b) ? "True": "false";
    cout<< result2<<endl;

    return 0;
}