#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "Inside A class" << endl;
    }
};

class B : public A{
    public:
    B(){
        cout << "Inside B class" << endl;
    }
};

class C : public B{};

class ExtClass : public A, public C{
    public:

    ExtClass(){
        cout<< "class all extends class A and B" << endl;
    }
};

int main(){

    // C obj;
    // obj.print();

    ExtClass obj;

    return 0;
}