#include <iostream>
using namespace std;
int main()
{
    int X, Y;
    cout << "Enter BaseValue(X) and SquareValue(Y): ";
    cin >> X >> Y;
    int temp=1;
    for(int i=0;i<Y;i++)
        temp =temp * X;
    cout<<X<<" raised to the power "<<Y<<" = "<<temp;
}
