//Write a C++ program to accept Gmail id only and throw an exception if the id does not 
// contain @ and gmail.com.

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string Gmail ;
    cout<<"Type Gmail ID : ";
    try{
    getline(cin,Gmail);

        if(Gmail.find('@') == -1 || Gmail.find("gmail") == -1)
                throw runtime_error("Gmail must contain '@' and 'gmail' both ");
                
        cout<<"Gmail ID : "<<Gmail<<endl;
    }catch(const exception & e)
    {
        cout<<"eroor : "<<e.what()<<endl;
    }
return 0;
}