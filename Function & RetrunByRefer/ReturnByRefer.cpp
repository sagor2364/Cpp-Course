#include <iostream>
using namespace std;

int num;

// function
int &returnByRefer();

int main()
{

    returnByRefer() = 5;

    cout << num << endl;

    return 0;
}

int &returnByRefer()
{
    return num;
}