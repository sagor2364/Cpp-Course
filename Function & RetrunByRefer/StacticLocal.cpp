#include <iostream>
using namespace std;

int staticVar();

int main(){
    // output will be 2 and 2 if the "var" is not delear as static variable in the function 
    staticVar(); // 2
    staticVar(); // 3

    return 0;
}

int staticVar(){
    static int var = 1;

    var++;
    cout<< var << endl;
    
    return var;
}