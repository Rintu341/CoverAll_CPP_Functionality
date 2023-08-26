/*
    Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in 
    int ) to Time class.  
    
    Example- 
    int main() 
    { 
        int duration; 
        cout<<”Enter time duration in minutes”; 
        cin>>duration; 
        Time t1 = duration; 
        t1.display(); 
        return 0; 
    }
*/
#include <iostream>
using namespace std;

class Time
{
    private:
        int duration;// store in minute
    public:
        Time():duration(0){}
        Time(int d) // PC  to convert int to Time
        {
            duration = d/60;
        }
        void display()
        {
            cout<<"Time is "<<duration<<" minutes"<<endl;
        }
};
int main() 
{
        int duration; 
        cout<<"Enter time duration in seconds"; 
        cin>>duration; 
        Time t1 = duration; 
        t1.display(); 
return 0;
}