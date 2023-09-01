// Write a C++ program to accept a mobile number and throw an exception if it does not 
// contain 10 digits
#include <iostream>
#define mobile_number_length  10
using namespace std;


int main() 
{
   unsigned long long mobile_n;
   cout<<"Enter your mobile number  : ";
   try{
      cin>>mobile_n;

      string m_number = to_string(mobile_n);

      short length = m_number.length();

      if(length > mobile_number_length || length < mobile_number_length)
         throw length_error("mobile number length should be 10 digits");

      cout<<"Your mobile number is : "<<m_number<<endl;
   }catch(const exception & e)
   {
      cout<<"Error : "<<e.what()<<endl;
   } 
return 0;
}