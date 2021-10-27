#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = a;
    int key = 4;

    for (int i = 0; i < 5; i++)
    {
        if(key == *(ptr + i)){
            cout << "found at " << i << endl;
        }
        //cout << *(ptr + i) << endl;
    }


    /* for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
    } */
}