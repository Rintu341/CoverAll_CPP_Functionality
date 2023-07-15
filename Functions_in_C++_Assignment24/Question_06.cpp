#include <iostream>
using namespace std;
void Swap (int &x,int &y){
    int p=x;
    x=y;
    y=p;
}
int main(){
    int a,b;
    cout<<"Enter two Numbers "<<endl;
    cin>>a>>b;
    Swap(a,b);
    cout<<a <<" "<< b<<endl;

}