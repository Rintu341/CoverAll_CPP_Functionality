#include <iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imag;
    public:
        void setdata(int real , int imag){
            this->real = real;
            this->imag = imag;
        }
        void showData(){
            cout<<"Complex number is : "<<real<< " + "<<imag<<"i"<<endl;
        }
        /*  
            operator++ is not a member function of Complex 
        */
        friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main() 
{
     Complex add,c1,c2;
        c1.setdata(3,6);
        c2.setdata(6,9);

        add = c1 + c2; // operator+(c1,c2)
        add.showData();

return 0;
}