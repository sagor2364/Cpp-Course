#include <iostream>
using namespace std;

class Animal{

    private:
    string color;

    protected:
    string type; // protected members


    public: 

    void eat(){
        cout << "eating..." << endl;
    }

    void sleep(){
        cout << "sleepings..."<< endl; 
    }

    //setter method
    void setColor(string clr){
        color = clr;
    }

    //getter method
    string getColor(){
        return color;
    }

};


// like java here, cow is extends animal class and it has access all the method under public 
// Cow class extends Animal class
class Cow : public Animal{
    public: 

    void setType(string t){  // type is protected but cow extends the animal class so it has access all method and variables
        type = t;
    }

    void getDetails(){
        cout << "Type = " << type << endl;
        cout << "color = " << getColor() << endl; // by calling function
    }

    void getDetails(string clr){
        cout << "Type = " << type << endl;
        cout << "color = " << clr << endl; // getting color from user 
    }

    void sound(){
        cout << "Making noise : " <<endl;
    }
};

int main(){
    Cow cow;

    cow.setType("ok type");
    cow.setColor("White");

    cow.eat();
    cow.sleep();
    cow.sound();
    cow.getColor();
    cow.getDetails();

    //calling the method with argument 
    cow.getDetails(cow.getColor());
    
    return 0;
}