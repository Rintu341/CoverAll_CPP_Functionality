/*
    Write a C++ program to demonstrate the use of try, catch block with the argument as an 
    integer and string using multiple catch blocks
*/
#include <iostream>
using namespace std;

int main() 
{
    int A,B;
    cout<<"Enter 2 numbers "<<endl;
    cin>>A>>B;
    int Result = 0;

    try 
    {
        if(B == 0)
            throw "Divide By Zero Exception "; // throw a String 
        if(B == 1)
            throw 99; // throw an Integer
        Result = A/B;
        cout<<"Result = "<<Result<<endl;
    }catch(const char * str)
    {
        cout<<str<<endl;   
    }catch(int I)
    {
        cout<<I<<endl;
    }catch(...)
    {
        cout<<"Default Exception"<<endl;
    }


return 0;
}