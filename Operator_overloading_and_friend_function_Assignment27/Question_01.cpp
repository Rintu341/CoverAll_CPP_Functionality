#include <iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imag;
    public:

        void setData(int real ,int imag){
            this->real = real;
            this->imag = imag;
        }
        void showData(){
            cout<<"Complex number is : "<<real<< " + "<<imag<<"i"<<endl;
        }
        Complex operator+(Complex com){
            Complex temp;
            temp.real = real + com.real;
            temp.imag = imag + com.imag;
            return temp;
        }
        Complex operator- (Complex com){
            Complex temp;
            temp.real = real - com.real;
            temp.imag = imag - com.imag;
            return temp; 
        }
        Complex operator* (Complex com){
            Complex temp;
            temp.real = real * com.real;
            temp.imag = imag * com.imag;
            return temp;
        }
        bool operator==(Complex com){
            if(real == com.real && imag == com.imag)
                return true;
            return false;
        }

};
int main() 
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(5,5);
    c1.showData();

    c2.setData(4,6);
    c2.showData();
    
    c3 = c1 + c2; // c1.operator+(c2);
    c3.showData();

    c4 = c1-c2; // c1.operator-(c2);
    c4.showData();

    c5 = c1*c2; //  c1.operator*(c2);
    c5.showData();

    (c1 == c2)?cout<<"Both complex number is same ":cout<<"Both Complex number are not same"<<endl;
    

return 0;
}