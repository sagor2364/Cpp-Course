#include <iostream>
using namespace std;

// void display(int*);
// void display1(int*, int*);

void display(int nums[]){

    for (int i = 0; i < 9; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << endl;
}

/**
 * In multidimention array the columns number should be always 
 * specified like this 
 * int n[][3] --> here col is mentioned 
 * */

void display(int nums[][3]){

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int nums[10] = {1,2,3,4,5,6,7,8,9};
    display(nums);

    int n[3][3] = {{1, 2, 4}, {5, 4, 8}, {7, 4, 2}};
    display(n);
}

