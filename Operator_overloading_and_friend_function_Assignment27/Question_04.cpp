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

        void normalize(){
            Minute += Second / 60;
            Second = Second % 60; 
            Hour += Minute / 60;
            Minute = Minute % 60; 
        }
        friend void operator>> (istream &cin,Time &t) // Time &t  pass actual object referance
        {   
            cout<<"Enter Hour ";
            cin>>t.Hour;
            cout<<"Enter Minute ";
            cin>>t.Minute;
            cout<<"Enter Second ";
            cin>>t.Second;
            t.normalize(); // correct if wrong
        }
        friend void operator<<(ostream & cout,Time &t)
        {
            cout<<"Hours = "<<t.Hour<<endl;
            cout<<"Minutes = "<<t.Minute<<endl;
            cout<<"Seconds = "<<t.Second<<endl;

        }
        bool operator== (Time &t1)
        {
            if(t1.Hour == this->Hour && t1.Minute == this->Minute && t1.Second == this->Second)
                return true;
            return false;
        }

};
  
int main() 
{   
    Time t1,t2;

    cout<<"Enter First Time"<<endl;
    cin>>t1;            // operator(cin,t1)
    cout<<"First time"<<endl;
    cout<<t1;           // operator(cout,t2)

    cout<<"Enter Second Time"<<endl;
    cin>>t2;
    cout<<"Second time"<<endl;
    cout<<t2;

    (t1 == t2)? cout<<"They are same"<<endl: cout<<"They are not same"<<endl;
    
    
return 0;
}