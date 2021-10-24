#include <iostream>
using namespace std;

class Room{
    public:
    double length;
    double breadth;
    double height;

    // constructor
    double calArea(){
        return length*breadth;
    }

    double calVol(){
        return length*breadth*height;
    }
};

int main(){
    Room room;

    room.length = 13;
    room.breadth = 334;
    room.height = 29;

    cout << room.length << endl;
    cout << room.breadth << endl;
    cout << room.height << endl;
    cout << room.calArea() << endl;
    cout << room.calVol() << endl;

    return 0;
}