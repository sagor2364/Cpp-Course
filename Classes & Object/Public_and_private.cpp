#include <iostream>
using namespace std;

class Person{
    // this section is only private
    private:
    int length;
    int breadth;
    int height;

    // from here all function is public
    public:
    void initializeData(int len, int bre, int hei){
        length = len;
        breadth = bre;
        height = hei;
    }

    int calArea(){
        return length * breadth;
    }

    int calVol(){
        return length * breadth *height;
    }
};

int main(){

    Person p;

    int len = 1, bre = 23, hei = 13;

    p.initializeData(len, bre, hei);

    // cout << p.height << endl; // it will show error because height is private

    cout << "Initializing" << endl;

    cout << p.calArea() << endl;
    cout << p.calVol() << endl;

    return 0;
}