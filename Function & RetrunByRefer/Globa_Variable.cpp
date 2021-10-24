#include <iostream>
using namespace std;

int gVariable = 1;

int staticVar();

int main(){

    gVariable++;
    cout<< gVariable << endl;


    staticVar();

    return 0;
}

int staticVar(){
    gVariable++;
    
    cout<< gVariable << endl;
}