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
    }
};


int main(){

    New ct; // object

    /**
     * @brief 
     * when a function is called from main method, the called function
     * is found in the New Class that extends the Base class
     * the print funtion is found in the New Class so that, funtion implemented, if the function was not
     * found it will found at the Base class.
     * 
     */
    ct.print(); // here print function is overridding 

    return 0;
}