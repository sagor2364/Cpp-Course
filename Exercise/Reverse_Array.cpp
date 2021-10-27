#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int temp;
    int start = 0, end = 4;
    int *ptr = a;
    
    while (start < end)
    {
        temp = ptr[start];
        ptr[start] = ptr[end];
        ptr[end] = temp;        
        start++;
        end--;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
    }
}