#include <iostream>
using namespace std;

/*
    Write a C++ program to demonstrate try, throw and catch statements.
*/

int main() 
{
    try
    {
        throw 4;
    }catch(int p)
    {
        cout<<"exception : "<<p<<endl;
    }
return 0;
}