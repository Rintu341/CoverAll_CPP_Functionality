#include <iostream>
using namespace std;
class Rectangle {
    public:
        int Area_of_Ractangle(int Length,int Width);
};
 int Rectangle::Area_of_Ractangle(int length,int width){
    return length *width;
} 
int main(){
    Rectangle r1;
    cout<<"Area of Reacangle = "<<r1.Area_of_Ractangle(4,6)<<endl;
    return 0;
}