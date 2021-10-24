#include <iostream>
using namespace std;

int main()
{
    int nums[3][3] = {{1, 2, 4}, {5, 4, 8}, {7, 4, 2}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}