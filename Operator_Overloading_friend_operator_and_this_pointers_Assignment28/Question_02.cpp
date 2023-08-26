#include <iostream>
using namespace std;
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
        
        
};
int main() 
{
    Complex c1;
    c1.setdata(6 ,8);
    c1.showdata();
return 0;
}