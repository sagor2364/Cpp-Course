// C++ Call Overridden Function From Derived Class

#include <iostream> 
using namespace std;

class Base{
    public:

    void print(){
        cout << "Base class function is implemented" << endl;
    }
};

class New : public Base{
    public:

    void print(){
        cout << "New class function is implemented" << endl;
        
        // another type
        //Base::print(); // calling the base print funtion from here insent of calling from main method
    }
};


int main(){

    New ob1, ob2;

    //ob1.print();

    //ob2.Base::print(); // directly calling the function using the object [called the Base class print]


    // using pointer 

    New object;

    Base *ob = &object;

    ob->print(); // syntax (pointer_name)->(variable_name)

    return 0;
}
