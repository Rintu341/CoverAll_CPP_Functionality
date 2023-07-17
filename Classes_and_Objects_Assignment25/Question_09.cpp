#include <iostream>
// #include <math.h>
using namespace std;
class Circle
{
public:
    float Area_of_Circle(float Radious);
};
float Circle ::Area_of_Circle(float Radious)
{
    return 3.142 * Radious * Radious;
}
int main()
{
    Circle r1;
    cout << "Area of Circle = " << r1.Area_of_Circle(9) << endl;
    return 0;
}