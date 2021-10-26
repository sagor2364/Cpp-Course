#include <iostream> 
using namespace std;

class Shape{
    public:
    void draw();
};

class Rectangle : public Shape{
    public:
    void draw(){
        cout << "Rectangle is drawing......." <<endl;
    }
};

class Circle : public Shape{
    public:
    void draw(){
        cout << "Circle is drawing......." <<endl;
    }
};

int main(){

    Rectangle obj1;
    Circle obj2;

    obj1.draw();
    obj2.draw();

    return 0;
}