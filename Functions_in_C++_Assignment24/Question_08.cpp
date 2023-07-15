#include <iostream>
#define Pi  3.14159265358979323846
using namespace std;
/*
    Formula of Circle  = Pi * redious * redious
*/
int calculateArea(int redious){ //for circle
    return Pi*redious*redious;
}
    /*
        Formula of Area of Traingle = (Base* hight)/2;
    */
double calculateArea(double base, double hight){ // for triangle
    cout<<"HII"<<endl;
    return (base*hight)/2;
}
/*
    Formula of Rectangle = length * width
*/
int calculateArea(int length,int width){ // for rectangle
    
    return (length * width);
}
int main() 
{
    cout<<"Area of Circle is : "<<calculateArea(8)<<endl;
    cout<<"Area of Traingle is : "<<calculateArea(8.7,5.7)<<endl;
    cout<<"Area of Rectangle is : "<<calculateArea(12,7)<<endl;


return 0;
}