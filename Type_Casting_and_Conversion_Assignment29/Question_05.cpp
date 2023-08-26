/*
    Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add 
functions to support Invent1 to float and Invent1 to Invent2 type. 
 
Example -  
int main() 
{ 
       Invent1 s1=(4,5); 
       Invent2 d1; 
       float tv; 
       tv=s1; 
       d1=s1; 
       return 0; 
}
*/
#include <iostream>
using namespace std;
class Invent1
{
    private:
        float num1;
        float num2;
    public:
        Invent1(float a,float b): num1(a),num2(b){}
        void setData(float NUM1,float NUM2)
        {
            num1 = NUM1;
            num2 = NUM2;
        }
        operator float() // Invent1 to float
        {
            return num1+num2;
        }
        void getInvent1(float * p, float * q)
        {
            *p = num1;
            *q = num2;
        }
        void showData()
        {
            cout<<"Invent1 values "<<num1<<" "<<num2<<endl;
        }
};
class Invent2
{
    private:
        float num1;
        float num2;
    public:
    
        Invent2(){}
        Invent2(Invent1 & I) // Invent1 to Invent2
        {
            float a,b;
            I.getInvent1(&a,&b);
            num1 = a;
            num2 = b;
        }

        void showData()
        {
            cout<<"Invent2 values "<<num1<<" "<<num2<<endl;
        }
};
int main() 
{
        Invent1 s1(4,5); 
        Invent2 d1; 
        float tv; 
        tv=s1; 
        d1=s1; 
        cout<<tv<<endl;
        s1.showData();
        d1.showData();
      
return 0;
}