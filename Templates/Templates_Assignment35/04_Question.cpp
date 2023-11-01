#include <iostream>
using namespace std;

template <class T, class F>

void Swap (T * x, F * y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main() 
{
    int x = 5;
    int y = 6;

    Swap<int,int>(&x,&y);

    cout<<x<<" "<<y<<endl;
    return 0;
}