#include <iostream>
using namespace std;
/*
     Write a C++ program to convert Complex type to Primitive type. 
 
    Example - 
    int main() 
    { 
        Complex c1; 
        c1.setData(3,4); 
        int x; 
        x=c1; 
        return 0; 
    } 
*/
class Complex{
    private:
        int real;
        int imag;
    public:
        Complex():real(0),imag(0){}
        Complex(int x,int y):real(x),imag(y){}

        operator int(){
            return real+imag;
        }
        void showdata(){
            cout<<"real "<<real<<" imaginary "<<imag<<endl;
        }
        void setData(int R, int I)
        {
            real = R;
            imag = I;
        }
};
int main() 
{
     
     Complex c1; 
        c1.setData(3,4); 
        int x; 
        x=c1; 
        cout<<"value of x "<<x<<endl;
        c1.showdata();
     
return 0;
}