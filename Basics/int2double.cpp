// Working of implicit type-conversion

#include <iostream>
using namespace std;

int main() {
   // assigning an int value to num_int
   int number = 1.04;
   double num = number;

   cout<< num << endl;
   cout << number << endl;

   return 0;
}