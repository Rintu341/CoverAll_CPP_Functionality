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
        void setTime(int a, int b, int c)
        {
            hour = a;
            minute = b;
            second = c;
        }
        void display()
        {
            cout << hour << " hour " << minute << " minute " << second << " second" << endl;
        }
};
int main()
{
    Time t1;
    t1.setTime(3, 15, 20);
    t1.display();
    return 0;
}