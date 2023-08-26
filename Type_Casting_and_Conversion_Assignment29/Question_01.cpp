#include <iostream>
using namespace std;
    /*
        Write a C++ program to convert Primitive type to Complex type. 
        Example - 
        int main() 
        { 
            Complex c1; 
            Int x=5; 
            c1=x; 
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
        Complex(int X)
        {
            real = X;
            imag = X;

        }
        Complex & operator=(int x){ // typecasting
            real = x+1;
            imag = x+2;
            return *this;
        }
        void showdata(){
            cout<<"real "<<real<<" imaginary "<<imag<<endl;
        }
        
};
int main() 
{
     Complex c1;
     int x = 10;
     c1 = x;
     c1.showdata();
     return 0;
}