#include <iostream>
using namespace std;

struct EMP
{
    char name[50];
    int salar;
    char title[50];
};

struct EMP employee[100];

int main()
{
    cin >> employee[0].name;
    cout << employee[0].name << endl;
}