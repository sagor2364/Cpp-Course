#include <iostream>
using namespace std;

int main()
{
    int a[4][4] = { {1, 2, 3, 4},
                    {3, 5, 1, 9},
                    {0, 8, 5, 6},
                    {1, 2, 3, 4}
    };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << *(*(a + i) + j) << " "; // using pointer
            //cout << a[i][j] << " "; // using index
        }

        cout << endl;
    }
}
