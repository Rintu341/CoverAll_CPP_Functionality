#include <iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imginary;
    public:
        Complex(){
            real=0;
            imginary=0;
        }
        void setData(int a,int b){
            real=a;
            imginary=b;
        }
        void setObjValue(){
            cout<<"real: ";
            cin>>real;
            cout<<"imaginary: ";
            cin>>imginary;
        }

        friend ostream & operator<<(ostream &,Complex &);
        friend istream & operator>>(ostream &,Complex &);
        
};
/*
here out is a another name of cout (referance)
*/
ostream & operator<<(ostream &ccout,Complex &X){//insertion operator
    cout<<"real = "<<X.real<<" imaginary = "<<X.imginary<<endl;
    return cout;
}
/*
here in is a another name of cin (referance)
*/
istream & operator>>(istream &cin,Complex &K){//extraction operator
    K.setObjValue();
    return cin;
}

int main(){
    Complex c1,c2,c3;
    c1.setData(8,11);
    cout<<c1;
    cin>>c2>>c3;
    cout<<c2<<c3;
    return 0;
}