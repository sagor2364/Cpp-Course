#include <iostream>
using namespace std;

int divide(int x, int y){
    if (y == 0){
        throw "Expection throwed !";
    }
    else{
        return (x/y);
    }
}

int main(){
    int x, y;
    x = 25;
    y = 0;

    try{
        divide(x, y);
    }catch(char* e){
        cout << "Error: " << e << endl;
    }
}