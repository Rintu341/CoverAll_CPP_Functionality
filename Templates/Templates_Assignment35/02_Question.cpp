#include <iostream>
using namespace std;
template <class T>
T Max(T x,T y)
{
    return (x>y)?x:y;
}
int main() 
{
    int x,y;
    cin>>x>>y;

    int MAXI = Max<int>(x,y);
    cout<<MAXI<<endl;
    return 0;
}