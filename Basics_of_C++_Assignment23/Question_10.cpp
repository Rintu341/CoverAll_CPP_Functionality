#include <iostream>
using namespace std;

int main(){
    int Arr[]={34,12,78,33,22,10,76,71,56,63};
    int sum=0;
    for(int i=0;i<10;i++)
        sum=sum+Arr[0];
    cout<<"sum of all element in an array = "<<sum;
    return 0;
}
