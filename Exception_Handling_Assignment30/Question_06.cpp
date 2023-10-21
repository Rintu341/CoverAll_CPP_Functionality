#include <iostream>
#define pin_number_length 6
using namespace std;
//Write a C++ program to accept area pin code and throw an exception if it does not 
// contain 6 digits
int main() 
{
    long pin;
    cout<<"Enter your pin number  : ";
    try{
        cin>>pin;

        string p_number = to_string(pin);

        short length = p_number.length();

        if(length > pin_number_length || length < pin_number_length)
            throw length_error("pin number length should be 6 digits");

        cout<<"Your pin number is : "<<p_number<<endl;
    }catch(const exception & e)
    {
        cout<<"Error : "<<e.what()<<endl;
    } 
return 0;
}