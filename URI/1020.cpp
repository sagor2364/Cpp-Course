#include <iostream>
 
using namespace std;
 
int main() {
 
    int days;
    int year, month, day;
    
    cin>> days;
    
    year = days / 365;
    month = (days % 365) / 30;
    day = (days % 365) % 30;
    
    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;

    return 0;
}