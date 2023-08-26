#include <iostream>
using namespace std;
/*
    Create a Coordinate class for 3 variables x,y and z and overload comma operator
    such that when you write  c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
    c3 are objects of 3D coordinate class
*/
class Coordinate{
    private:
        int x;
        int y;
        int z;
    public:
        Coordinate():x(0),y(0),z(0){}
        Coordinate(int X ,int Y,int Z){
            x = X;
            y = Y;
            z = Z;
        }

        Coordinate & operator=(Coordinate &CO){
            x = CO.x;
            y = CO.y;
            z = CO.z;
            return *this;
        }
        void showdata(){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
};
int main()
{
    Coordinate c1(2,4,6),c2(1,5,7),c3(10,12,25);
    Coordinate c4 = (c1,c2,c3);
    c4.showdata();
    return 0;
}