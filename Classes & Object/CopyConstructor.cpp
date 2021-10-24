#include <iostream>
using namespace std;

class Wall{
    // this section is only private
    private:
    int length;
    int height;

    public:

    // constructor with argument
    void wall(int len, int hei){
        length = len;
        height = hei;
    }

    void wall(Wall &wall){
        length = wall.length;
        height = wall.height;
    }

    int calArea(){
        return length * height;
    }

};

int main(){

    Wall w1;
    Wall w2;

    w1.wall(10, 5);

    w2 = w1;

    cout << "Wall w1 = " << w1.calArea() << endl;
    cout << "Wall w2 = " << w2.calArea() << endl;


    return 0;
}