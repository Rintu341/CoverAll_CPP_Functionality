#include <iostream>
using namespace std;
    int maximum(int num1, int num2){
        return max(num1,num2);
    }
    double maximum(double num1,double num2){
        return (num1 > num2)? num1 : num2;
    }
int main() 
{
    cout<< maximum(12,89)<<endl; // for integer
    cout<<maximum(34.878,13.124); // for real
return 0;
}