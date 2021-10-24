#include <iostream>
using namespace std;

int main(){
    int nums[] = {1, 2, 3, 4, 5, 6, 7};

    // Using For Each loop
    for(int n: nums){
        cout << nums[n-1] << " "; // at position (n-1) the last element store in this array
    }

    cout << endl;

    // This is memory efficient and "const" helps to not to change the variable accidently
    for(const int &n: nums){
        cout << nums[n-1] << " "; // at position (n-1) the last element store in this array
    }

    // cout<< endl;

    // //nums[3] = 23;

    // for(int n: nums){
    //     cout << nums[n-1] << " "; // at position (n-1) the last element store in this array
    // }
}