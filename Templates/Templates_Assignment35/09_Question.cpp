/*
Write a C++ Program to Perform Simple Addition Function Using Templates.
*/

#include <iostream>

using namespace std;
template <class X,class Y>
double addition(X a,Y b)
{
    return a+b; 
}
int main() 
{   
    double sum = addition<int, float>(7,8.4);
    cout<<"sum is "<<sum<<endl;
    return 0;
}