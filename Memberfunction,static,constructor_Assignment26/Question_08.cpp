#include <iostream>
using namespace std;

class Bank{
    private:
        float Principal;
        float roi;//rate of interest
        int Year;
    public:
        Bank(float principal,float ri,int year){
            Principal=principal;
            roi=ri;
            Year=year;
        } 
        void getData(){
            cout<<"Enter Principal,rate of interest,Year : ";
            cin>>Principal>>roi>>Year;
        }
        int claculate_simple_interest(){
            return (Principal*roi*Year)/100;
        }
};
int main(){
    Bank  b1(20000,9,1);
    b1.getData();
    cout<<"Simple interest is "<<b1.claculate_simple_interest()<<endl;
    return 0;
}