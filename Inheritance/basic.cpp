#include <iostream>
using namespace std;

class Animal{
    public: 

    void eat(){
        cout << "eating..." << endl;
    }

    void sleep(){
        cout << "sleepings..."<< endl; 
    }

};


// like java here, cow is extends animal class and it has access all the method under public 
class Cow : public Animal{
    public: 

    void sound(){
        cout << "Making noise : " <<endl;
    }
};

int main(){
    Cow cow;

    cow.eat();   // cow extends the animal class
    cow.sleep();
    cow.sound();

    return 0;
}