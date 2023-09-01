#include <iostream>
#include <string>
using namespace std;

//Write a C++ program to accept an email address and throw an exception if it does not 
// contain @ symbol

int main() 
{
    string  email;
    
    cout<<"Enter Your email id : ";
    try{
    getline(cin,email);

    if(email.find('@') == -1)
        throw invalid_argument("your email not contain  '@' symbol");

    cout<<"Your email id is "<<email<<endl;
    
    }catch(const exception & e)
    {
        cout<<"Error : "<<e.what()<<endl;
return 0;
    }  
}