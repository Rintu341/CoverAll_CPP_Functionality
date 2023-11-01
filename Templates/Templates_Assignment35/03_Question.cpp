#include <iostream>
using namespace std;

template <class T, class F,class G>
double MAXof3(T X,F Y,G Z)
{
    if(X > Y && X > Z)
    {
        return X;
    }else if(Y>Z)
    {
        return Y;
    }else
        return Z;
} 
int main() 
{
    int largest = MAXof3<int,int,int>(18, 17 ,20);
    cout<<largest<<endl;
    return 0;
}