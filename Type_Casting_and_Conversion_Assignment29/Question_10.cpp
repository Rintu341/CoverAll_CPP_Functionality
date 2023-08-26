/*
    Create two classes Rupee and Dollar and add necessary functions to support Rupee to 
    Dollar and Dollar to Rupee conversion. 
 
    Example- 
    int main() 
    { 
    Rupee r = 23; 
    Dollar d = r;   // Rupee to Dollar conversion 
    
    d.display(); 
    r.display(); 
    
    r = d;        // Dollar to Rupee Conversion 
    d.display(); 
    r.display(); 
    
        return 0; 
    }
*/
#include <iostream>
using namespace std;
/*
    initialize Dollar class for  convert Rupee to Dollar , 

    Rupee class created before  Doller and Rupee Do not find Dollar class
    that's why first initialize Dollar class.
*/
class Dollar; 
class Rupee
{
    private:
        float value;
    public:
        Rupee(){}
        Rupee(float X)
        {
            cout<<"PC of Rupee called "<<endl;
            value = X;
        }
        operator float()
        {
            return value;
        }
        void display()
        {
            cout<<"Rupee value is  "<<value<<endl;
        }
        float getRupeeValue() // return rupee value to PC of Dollar(Rupee)
        {
            return value;
        }
        
};
class Dollar
{
    private:
        float value;
    public:
        Dollar():value(0){}
        Dollar(float X) // PC 
        {
            cout<<"PC of Dollar called "<<endl;
            value = X;
        }
        Dollar(Rupee & R){ // Rupee -->  Dollar   , Use PC 
            cout<<"Doller(Rupee & ) called "<<endl;
            value = R.getRupeeValue()/100;
        }
        operator float()
        {
            return value;
        }
        void display()
        {
            cout<<"Dollar value is  "<<value<<endl;
        }
        operator Rupee() //convert Dollar --> Rupee 
        {
            cout<<"operator Rupee() called "<<endl;
            return  value * 100;
        }
        
};
int main() 
{
    Rupee r = 23; // int to Rupee conversion 
    Dollar d = r; // Rupee to Dollar conversion , use Doller(Rupee & )

    d.display(); 
    r.display(); 

    d = 89;       // int to Dollar Conversion 

    r = d;        // Dollar to Rupee Conversion , use operator Rupee()
    d.display(); 
    r.display();
    
    return 0;
}