#include <iostream>
using namespace std;

int main(){
    int* ptr;
    ptr = new int[5];

    for (int i = 0; i <5; i++){
        cin >> *(ptr + i);
    }

    cout << endl;

    for (int i = 0; i <5; i++){
        cout << *(ptr + i) << endl;
    }

    delete [] ptr; // deleteing the momeory that alocated for array because it is no longer needed anymore

}