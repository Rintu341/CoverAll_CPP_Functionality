#include <iostream>
using namespace std;
/*
    Create an Integer class that contains int x as an instance variable and overload
    casting int() operator that will type cast your Integer class object to int data type
*/
// I1 =7;
// int a = int(I1) 
// a =7;
class Integer{
    private:
        int x;
    public:
        Integer():x(0){}
        Integer(int X){
            x = X;
        }
        operator int() // user-defined Conversion operator
        {
            return x;
        }
};

int main() 
{
     Integer I1 = 8;
     int INT = int(I1); // I1.operator int()
     cout<<INT<<endl;
return 0;
}