#include <iostream>
using namespace std;

int main(){
    char str[100];
    // cin >> str; // here it is unable to read a line of string, it can read only char without any space

    // cout << "you entered : " << str << endl;

    /*
    cin.get(str, 100); // taking input from user as A string like "I am sagar." and till array size of 100
    cout << "you entered : " << str << endl;
    */


    // C++ string object using string data type

    string str1;
    cout << "enter a line of text here: " << endl;
    getline(cin, str1);

    cout << "you entered here: " << endl;
    cout << str1 << endl;

}