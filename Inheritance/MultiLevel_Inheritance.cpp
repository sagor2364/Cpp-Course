#include <iostream>
using namespace std;

class A{
    public:
    void print(){
        cout << "Inside A class" << endl;
    }
};

class B : public A{};

class C : public B{};

int main(){

    C obj;
    obj.print();

    return 0;
}