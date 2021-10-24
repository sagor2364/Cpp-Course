#include <iostream>

using namespace std;

int main()
{

    int a, b, c, MaiorAB, Max;
    cin >> a >> b >> c;
    MaiorAB = (a + b + abs(a - b)) / 2;
    Max = (MaiorAB + c + abs(MaiorAB - c)) / 2;
    cout << Max << " eh o maior " << endl;

    return 0;
}