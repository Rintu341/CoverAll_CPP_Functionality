//Write a C++ program to accept Nickname and throw an exception if it has greater than 8 
// characters or does contain a digit or special symbol or space

#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool checkValidName(const string name)
{
    for(char character : name)
    {
        if(isdigit(character) ||  !isalnum(character) || isspace(character))
        {
            return true;
        }
    }
    return false;
}
int main() 
{
     string NickName;

     cout<<"Your NickName : ";
     try
     {
        getline(cin,NickName);

        if(NickName.length() > 8)
            throw runtime_error("length must be less then or equal to 8 character");

        if(checkValidName(NickName))
                throw runtime_error("NickName does not contain a digit or special symbol or space");

        cout<<"NickNmae : "<<NickName<<endl;
     }catch(const exception & e)
     {
        cout<<"error : "<<e.what()<<endl;
     }
return 0;
}