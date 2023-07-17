#include <iostream>
using namespace std;
class Complex{
    private :
        int a ;
        int b;
    public:
        Complex(){
            a = 0;
            b = 0;
        }
        void setData(int real, int imag)
        {
            a = real;
            b = imag;
        }
        void showData(){
            cout<<"real = "<<a<<" imaginary = "<<b<<endl;
        }
        Complex add(Complex A)
        {   
            Complex temp;
            temp.a = a + A.a;
            temp.b = b + A.b;
            return temp;
        }

};
int main() 
{
   Complex x1,x2,x3;;
    x1.setData(2,5);
    x1.showData();

    x2.setData(5,7);
    x2.showData();

    x3 = x1.add(x2);
    x3.showData();

return 0;
}