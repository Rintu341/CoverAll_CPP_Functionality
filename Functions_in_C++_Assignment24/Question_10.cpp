#include <iostream>
using namespace std;
double add(float num1,double num2 ){
    return (num1 + num2);
}
long int add(long int num1, int num2){
    return (num1 + num2);
}
int main() 
{
     cout<<add(8,8.8f)<<endl;
     cout<<add(12,90)<<endl;
     
return 0;
}