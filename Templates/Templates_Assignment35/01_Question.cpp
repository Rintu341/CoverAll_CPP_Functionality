#include <iostream>
using namespace std;

template <class T, class F,class H = double>// default datatype
H add(T X,F Y)
{
    return X+Y;
}
int main() 
{
    int sum1 = add<int,int,int>(3,6);
    float sum2 = add<float,int,float>(7.5,8);
    double sum3 = add<double,double>(4.5,6.8);
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    cout<<sum3<<endl;
    return 0;
}