#include <iostream>
using namespace std;

int main(){
    double nums[] = {1, 2, 3, 4, 5, 6, 7};

    double sum = 0;
    double count = 0;
    double avg;
    

    for(const int &n : nums){
        sum += nums[n];

        count++;
    }

    avg = sum / count;

    cout << avg << endl;

    //cout << malloc(sizeof(nums)/sizeof(nums[0])) << endl;
}