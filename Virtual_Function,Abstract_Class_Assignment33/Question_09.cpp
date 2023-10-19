#include <iostream>
#include <cmath>
using namespace std;
class  volume
{
    private:
        double x;
        // double y;
    public:
        inline void get_data(double x )
        {
            this->x = x;
        }
        inline double get_x(){return x;}
        // inline double get_y(){return y;}

        virtual void display_volume() = 0;
};
class  cube : public  volume
{   
    //cube volume formula  V = a3 , where a is edge
    public:
        void display_volume()
        {
            cout<<"Volume of a cube is "<<pow(get_x(),3)<<endl;
        }
};
class sphere : public volume
{   
    // The formula for the volume of a sphere is V = 4/3 π r³,
    // where V = volume and r = radius. The radius of a sphere is half its diameter
    //4/3 = 1.333
    public:
        void display_volume()
        {
            cout<<"Volume of a Sphere is "<<(1.333 * 3.142 * pow(get_x(),3))<<endl;
        }

};
int main() 
{
    double redious;
    double edge;
    volume * v[2];
    cube obj1;
    v[0] = &obj1;
    cout<<"Enter edge of cube ";
    cin>>edge;
    v[0]->get_data(edge);
    v[0]->display_volume();

    sphere obj2;
    v[1] = &obj2;
    cout<<"Enter redious of Sphere : ";
    cin>>redious;
    v[1]->get_data(redious);
    v[1]->display_volume();

    return 0;
}