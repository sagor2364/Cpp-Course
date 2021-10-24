#include <iostream>
using namespace std;

void display(char*);
void display(string);

int main(){
    string str;
    getline(cin, str);
    display(str);


    char s[100]; // char array as parameter will be taken into cin.get() funtion
    cin.get(s, 100, '\n');
    display(s);
}

void display(string str){
    cout << "you entered : " << str << endl;
}

void display(char s[]){
    cout << "you entered : " << s << endl;
}
