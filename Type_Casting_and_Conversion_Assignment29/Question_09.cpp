/*
    create a Dollar class and add necessary functions to support int to Dollar type conversion. 
 
    Example- 
    int main() 
    { 
        int x = 50; 
    Dollar d; 
    d =  x; 
    d.display(); 
        return 0; 
    }
*/
#include <iostream>
using namespace std;

class Dollar
{
    private:
        int value;
    public:
        Dollar():value(0){}
        Dollar(int X) // PC 
        {
            value = X;
        }
        void display()
        {
            cout<<"Dollar value is  "<<value<<endl;
        }
};

int main() 
{
    int x = 50; 
    Dollar d; 
    d =  x; 
    d.display();
return 0;
}