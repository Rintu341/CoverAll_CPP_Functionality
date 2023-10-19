#include <iostream>
using namespace std;

// Create a base class called shape. Use this class to store 2 double type values that
// could be used to compute the area of figures. Derive 2 specific classes called triangle
// and rectangle from the base shape. Add to the base class a member function
// get_data() to initialise base class data members and another member function
// display_area() to compute and display the area of figures. Make display_area() as a
// virtual function and redefine this function in derived classes to suit their requirements.
// Using these 3 classes, design a program that will accept the dimensions of the
// shapes interactively and display area
class shape
{
    protected:
        double x,y;
    public:
        void get_data(double x, double y)
        {
            this->x = x;
            this->y = y;
        }
        double get_x(){return x;}
        double get_y(){return y;}

        virtual void display_area()=0;
};
class triangle : public shape
{
    public:
        void display_area()
        {
            double area;
            area = 0.5 * x * y;
            cout<<"area of triangle is "<<area<<endl;
        }

};

class rectangle : public shape
{
    public:
        void display_area()
        {
            double area ;
            area = x * y;
            cout<<"area  of rectangle is "<<area<<endl;
        }

};
int main() 
{
    shape * sp[2];
    triangle t;
    sp[0] = &t;
    double x;
    double y;
    cout<<"Enter the value of x and y of triangle : ";
    cin>>x>>y;
    sp[0]->get_data(x,y);
    sp[0]->display_area();

    cout<<endl;

    rectangle r;
    sp[1] = &r;
    cout<<"Enter the value of x and y of rectangle : ";
    cin>>x>>y;
    sp[1]->get_data(x,y);
    sp[1]->display_area();

return 0;
}