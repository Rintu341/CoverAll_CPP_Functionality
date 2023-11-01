#include <iostream>
using namespace std;

template <class T, class F,class H = double>// default datatype
H add(T X,F Y)
{
    return X+Y;
}
int main() 
{
    int sum = add<int,int> (56,78);
    cout<<sum<<endl;
    return 0;
}