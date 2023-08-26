/*
        Create two class Time and Minute and add required getter and setter including constructors. 
        Now you need to type cast Time object into Minute to fetch the minute from Time and display it. 
        
        Example -  
        int main() 
        { 
            Time t1(2,30); 
            t1.display(); 
            Minute m1; 
            m1.display(); 
            m1=t1     // Fetch minute from time 
            t1.display(); 
            m1.display(); 
            return 0; 
        }

*/

#include <iostream>
using namespace std;
class Time
{
    private:
        int minute;
        int second;
    public:
        Time(int a, int b):minute(a),second(b){}
        Time():minute(0),second(0){}

        void display()
        {
            cout<<"Time class "<<"minute "<<minute<<" second "<<second<<endl;
        }
        void getTime(int * p, int * q)
        {
            *p = minute;
            *q = second;
        }
};
class Minute
{
    private:
        int minute;
        int second;
    public:
        Minute():minute(0),second(0){}
        Minute(Time & Q)
        {
            int P,L;
            Q.getTime(&P,&L);
            minute = P;
            second = L;
        }
        void display()
        {
            cout<<"Minute class "<<"minute "<<minute<<" second "<<second<<endl;
        }
};
int main() 
{
            Time t1(2,30); 
            t1.display(); 
            Minute m1; 
            m1.display(); 
            m1=t1;    // Fetch minute from Time 
            t1.display(); 
            m1.display(); 
return 0;
}