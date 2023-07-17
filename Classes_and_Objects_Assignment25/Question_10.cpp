#include <iostream>
// #include <math.h>
using namespace std;
class Area
{
public:
    float Area_of_Circle(float Radious);
    int Area_of_Ractangle(int Length,int Width);
    int Area_of_Square(int Length);
    // int Area_of_(int Length,int Width);


};
float Area ::Area_of_Circle(float Radious)
{
    return 3.142 * Radious * Radious;
}
int Area::Area_of_Ractangle(int length,int width){
    return length *width;
}
int Area::Area_of_Square(int Length){
    return Length*Length;
}

int main()
{
    Area r1;
    cout << "Area of Circle = " << r1.Area_of_Circle(9) << endl;
    cout<<"Area of Reacangle = "<<r1.Area_of_Ractangle(4,6)<<endl;
    cout<<"Area of Square = "<<r1.Area_of_Square(6)<<endl;

    return 0;
}