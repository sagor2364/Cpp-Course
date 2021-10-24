#include <iostream>
using namespace std;

class Wall{
    // this section is only private
    private:
    int length;

    // constructor without any arguments
    public:
    void wall(){
        length = 5;
        cout << "Wall length = " << length << endl;;
    }

    // constructor with argument
    void wall(int len){
        length = len;
        cout << "Wall length = " << length << endl;;
    }

};

int main(){

    Wall w1; // creatring a object

    w1.wall(); // calling the function inside the class using object

    int newLength = 10; 
    w1.wall(newLength); // calling the function (with argument) inside the class using object

    return 0;
}