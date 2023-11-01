#include <iostream>
using namespace std;
class A  // non-template class
{
    public:
        void fun1()
        {
            cout<<"A:: fun1() called"<<endl;
        }
};
template <class T>
class B : public A // template class
{   
    private:
            T a;
    public:
        void fun2()
        {   
            fun1();  
            cout<<"Enter number : "<<endl;
            cin>>a;
            cout<<"B:: fun2() called "<<"number is "<<a<<endl;
        }
};
int main() 
{
    B <float>obj;
    obj.fun2();
    return 0;
}