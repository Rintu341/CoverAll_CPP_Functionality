#include <iostream>
using namespace std;
/*
    Create a complex class and overload assignment operator for that class.
*/
class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(){
            real=0;
            imaginary=0;
        }
        void setdata(int real,int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        }
        void showdata(){
            cout<<"Complex number is : "<<real<<" + i"<<imaginary<<endl;
        }
        Complex& operator=(Complex &X){
           real = X.real;
           imaginary = X.imaginary;
           return *this;
        }
};
int main() 
{
   Complex c1,c2,c3;
   c1.setdata(4,6);
   c1.showdata();
   c3 = c2 = c1;  // c3.operator=(c2) c2.operator=(c1);
   c2.showdata();
   c3.showdata();
return 0;
}