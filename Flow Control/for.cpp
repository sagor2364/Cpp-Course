#include <iostream>
using namespace std;

int main(){
    /*
    for(int i = 1; i <= 5; i++){
        cout << i << " Hello World" << endl;
    }*/
    int i;

    int numArrays[] = {1,2,3,4,5,6,7,8};

    for(int i = 0; i < 8; i++){
        cout << numArrays[i] << " " << endl;
    }

    int forEach[] = {1,2,3,4,5,6,7,8};

    for(int n : forEach){
        cout << n << " ";
    }

    return 0;
}