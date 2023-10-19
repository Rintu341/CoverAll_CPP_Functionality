#include <iostream>
using namespace std;
class Time // class and stucture always difine in before main
{
private: // private member variabe can only access by its own member function
    int hour;
    int minute;
    int second;

public:
    /*
     That functions are instance member funation
    */
   Time(){
        hour=minute=second=0;
   }
    void setTime(int a, int b, int c)
    {
        hour = a;
        minute = b;
        second = c;
    }
    void showTime()
    {
        cout << hour << " hour " << minute << " minute " << second << " second" << endl;
    }
    void normalize(){
        minute +=second/60;
        second =second%60;
        hour+=minute/60;
        minute=minute%60;
    }
    Time add (Time t){
        t.hour+=this->hour;
        t.minute+=this->minute;
        t.second+=this->second;
        return t;
    }
};
int main()
{
    Time t1,t2;
    t1.setTime(3, 75, 67);
    t2.setTime(4,12,89);
    t1.normalize();
    t2.normalize();
    Time t3=t1.add(t2);
    t1.showTime();
    t2.showTime();
    cout<<"add two time "<<endl;
    t3.normalize();
    t3.showTime();
    return 0;
}