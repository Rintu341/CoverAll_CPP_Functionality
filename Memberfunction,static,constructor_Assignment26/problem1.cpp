#include <iostream>
using namespace std;
class Complex //class and stucture always difine in before main
{
private: // private member variabe can only access by its own member function
    
    int real;
    int imaginary;

public:
    /*
     That functions are instance member funation
    */
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void showData()
    {
        cout << real << " + i" << imaginary << endl;
    }
    Complex add(Complex X){
        Complex temp;
        temp.real=X.real+real;
        temp.imaginary=X.imaginary+imaginary;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,6);
    c2.setData(4,7);
    c3=c1.add(c2);
    c3.showData();
    return 0;
}

