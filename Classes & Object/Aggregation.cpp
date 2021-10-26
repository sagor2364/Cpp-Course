// C++ Aggregation Example

#include <iostream>
using namespace std;

class Address
{

public:
    string address, city, state;

    Address(string address, string city, string state)
    {
        this->address = address;
        this->city = city;
        this->state = state;
    }
};

class Empolyee
{

private:
    Address *address;

public:
    int id;
    string name;

    Empolyee(int id, string name, Address *address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
    }

    void display()
    {
        cout << "Name is " << this->name << endl;
        cout << id << " " << address->address << " " << address->city << " " << address->state << endl;
    }
};

int main()
{   
    Address A1 = Address("Mahakhali", "Dhaka city", "Dhaka, Bangladesh");
    Empolyee e1 = Empolyee(1, "sagar", &A1);

    e1.display();

    return 0;
}