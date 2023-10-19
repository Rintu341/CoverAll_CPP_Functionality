#include <iostream>
using namespace std;

class Box
{
private:
    int Length;
    int Width;
    int Hight;

public:
    Box(int L, int W, int H)
    {
        Length = L;
        Width = W;
        Hight = H;
    }
    int find_Box_volume(){
        return Length*Width*Hight;
    }
};
int main()
{
    int length;
    int width;
    int hight;
    cout << "Enter length,width,hight : ";
    cin >> length >> width  >> hight;
    Box d1(length,width,hight);
    cout<<" volumeof the box = "<<d1.find_Box_volume()<<endl;
    return 0;
}