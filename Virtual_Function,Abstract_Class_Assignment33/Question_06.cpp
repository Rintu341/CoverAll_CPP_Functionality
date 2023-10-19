// Extend above to display the area of circles. For a circle,only one value is needed i.e.
// radius but in get_data() function 2 values are passed

#include <iostream>
using namespace std;

class shape
{
    private:
        double x,y;
    public:
        void get_data(double x , double y = 0)
        {
            this->x = x;
            this->y = y;
        }
        inline double get_x(){return x;}
        inline double get_y(){return y;}

        virtual void display_area() = 0;
};
class circle : public shape
{   

    public:
        void display_area()
        {
            cout<<"area of a Circle is "<<3.142 * get_x() * get_x();
        }
};
int main() 
{
    shape * sp;
    circle c;
    sp = &c;
    double x;
    cout<<"Enter rediaous of a circle "<<endl;
    cin>>x;
    sp->get_data(x);
    sp->display_area();
return 0;
}