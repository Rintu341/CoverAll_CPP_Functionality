#include <iostream>
#include <array>
using namespace std;
template <typename T>
T sumOfArray(T arr[], int p)
{
    T sum = 0;

    for(int i = 0;i < p; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main() 
{
    int  arr[]={1,2,3,4,5,6,7,8,9,10};
    float arr2[]={2.3,5.6,7.9};
    cout<<sumOfArray<int>(arr,10)<< endl;
    cout<<sumOfArray<float>(arr2,3)<<endl;
    return 0;
}