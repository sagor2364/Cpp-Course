#include <iostream>
using namespace std;

class Account
{
public:
    int accNo;
    string name;

    static int rateOfInterest;

    Account(int acNum, string name)
    {
        this->accNo = acNum;
        this->name = name;
    }

    void displayInfo()
    {
        cout << "Account of " << name << endl;
        cout << "and Account no: " << accNo << endl;
        cout << "rateOfInterest: " << rateOfInterest << "%" << endl;
    }
};

int Account::rateOfInterest = 9;

int main()
{

    Account A1 = Account(1151, "Sagar Karmoker");

    A1.displayInfo();

    return 0;
}