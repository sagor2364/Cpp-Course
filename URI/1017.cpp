#include<bits/stdc++.h>

using namespace std;

int main(){

    int flue = 12;
    int hours,speed;
    cin>> speed;
    cin>> hours;

    float r = ((float)hours / (float)flue) * speed;
    cout << fixed << setprecision(3) << r << endl;

    return 0;
}