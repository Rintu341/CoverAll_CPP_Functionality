#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imaginary;
    public:
        void setValue(int real ,int imag){
            this->real = real;
            this->imaginary =  imag;
        }
        void display(Complex temp){
            cout<<"real = "<<temp.real<<" imaginary = "<<temp.imaginary<<endl; 
        }
};
int main() 
{
     Complex com ;
     com.setValue(12,34);
     com.display(com); 
return 0;
}