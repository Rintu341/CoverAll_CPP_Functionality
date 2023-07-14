#include <iostream>
using namespace std;

int main(){
    float Length ,Width,Height;
    // The volume of a cuboid = (Length × Width × Height) Cubic units.
    cout<<"Enter Length, Width, Height: ";
    cin>>Length>>Width>>Height;

    float cuboid =Length * Width * Height;
    cout<<"The volume of a cuboid = "<<cuboid<<endl;


}
