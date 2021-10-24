#include <iostream>
using namespace std;

int main(){

    int N; 
    cin >> N;
    float hours, minutes, seconds;

    hours = N / 3600;
    minutes = N / 60;
    seconds = N /3600;

    cout << hours << ":" << minutes << ":" << seconds << endl;


    return 0;
}