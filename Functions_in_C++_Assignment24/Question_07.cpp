#include <iostream>
using namespace std;
inline int add(int ,int,int=0);//default value set

int main(){
    int a,b,c;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Sum is = "<<add(a,b)<<endl;
    cout<<"Enter three number: ";
    cin>>a>>b>>c;
    cout<<"Sum is = "<<add(a,b,c)<<endl;
    return 0;
}
int add(int x,int y,int z){
    // cout<<z;
    return x+y+z;
}
