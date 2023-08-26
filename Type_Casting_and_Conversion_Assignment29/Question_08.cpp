/*
    Create a Rupee class and convert it into int. And Display it. 
 
    Example- 
    int main() 
    { 
        Rupee r = 10; 
        int x = r; 
        cout<<x; 
        return 0; 
    } 
*/

#include <iostream>
using namespace std;

class Rupee
{
    private:
        int value;
    public:
        Rupee(){}
        Rupee(int X)// PC  
        {
            value = X;
        }
        operator int() // operator int() for convert Rupee to int
        {
            return value;
        }

};
int main() 
{
    Rupee r = 10; 
    int x = r; 
    cout<<x;  
return 0;
}