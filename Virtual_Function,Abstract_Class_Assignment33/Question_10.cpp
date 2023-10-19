#include <iostream>
#include <cmath>
using namespace std;
class  shape
{
    private:
        double x;
        double y;
    public:
        inline void get_data(double x,double y = 0 )
        {
            this->x = x;
            this->y = y;
        }
        inline double get_x(){return x;}
        inline double get_y(){return y;}

        virtual void display_area() = 0;
};
class   square : public   shape
{   
    //square area formula A=a^2
    public:
        void display_area()
        {
            cout<<"area of a  square is "<<pow(get_x(),2)<<endl;
        }
};
class parallelogram : public  shape
{   
    //parallelogram area formula A=bh, where b is base & h is hight 
    public:
        void display_area()
        {
            cout<<"area of a parallelogram is "<<get_x() * get_y()<<endl;
        }

};
int main() 
{
    double base;
    double hight;
    double side;
    shape * v[2];
    square obj1;
    v[0] = &obj1;
    cout<<"Enter side of  square ";
    cin>>side;
    v[0]->get_data(side);
    v[0]->display_area();

    parallelogram obj2;
    v[1] = &obj2;
    cout<<"Enter base & hight of parallelogram : ";
    cin>>base>>hight;
    v[1]->get_data(base,hight);
    v[1]->display_area();

    return 0;
}