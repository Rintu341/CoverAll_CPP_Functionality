#include <iostream>
using namespace std;
class Square
{
private:
    int X;
    int square;   // instance member variable
    static int K; // static member variable

public:
    void setData(int p)
    {
        X = p;
    }
    void findsquare()
    {
        square = X * X;
    }
    void display()
    {
        cout << "Square = " << square << endl;
    }
    static void putK() { K++; }; // satic member function
    static int getk() { return K; }
};
int Square::K = 0; // static variable declearation

int main()
{
    Square s;
    s.setData(8);
    s.putK(); // static member fuction access by object
    /*
     Square::K++;
     we can access static variable by class name ,but here k is in private, that's why we can not access k by both(class and object).

     Square::findsquare();
     we can not access nonststatic function/variable by class name because those function are object specific.
    */
    s.findsquare();
    Square::putK(); // static member fuction access by class name
    s.display();
    s.putK();
    cout << Square::getk() << endl;
    return 0;
}
