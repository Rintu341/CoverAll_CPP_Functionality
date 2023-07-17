#include <iostream>
using namespace std;
class Time{
    private :
        int Hour;
        int Minute;
        int Second;
    public:
        Time(){
            Hour = Minute = Second = 0;
        }
        void setTime(int hour,int minute,int second){
            Hour = hour;
            Minute = minute;
            Second = second;
            normalize();
        }
        void showTime(){
            cout<<Hour<<"h "<<Minute<<"m "<<Second<<"s "<<endl;
        }
        void normalize(){
            Minute += Second / 60;
            Second = Second % 60; 
            Hour += Minute / 60;
            Minute = Minute % 60; 
        }
        Time add(Time T){
            Time temp;
            temp.Hour = this->Hour + T.Hour;
            temp.Minute = this->Minute + T.Minute;
            temp.Second = this->Second + T.Second;
            temp.normalize();
            return temp;
        }

};

int main() 
{
     Time t1,t2,t3;

     t1.setTime(4,62,89);
     t1.showTime();
     
     t2.setTime(3,76,67);
     t2.showTime();

     t3 = t1.add(t2);
     t3.showTime();
return 0;
}