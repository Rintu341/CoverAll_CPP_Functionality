// Write a C++ program to demonstrate how a common friend function can
// be used to exchange the private values of two classes. (Use call by
// reference method)

#include <iostream>
using namespace std;
class A;

class B {
    private:    
        int number;
    
    public:
    B(int num): number(num){}
    friend void exchangeVlue(B &,A &);

    void printValue()
    {
        cout<<"class B's value : "<<number<<endl;
    }

};

class A
{
    private: 
        int number;
    
    public:
        A(int num): number(num){}
    friend void exchangeVlue(B &,A &);

    void printValue()
    {
        cout<<"class A's value : "<<number<<endl;
    }

};




void exchangeVlue(B & b,A & a)
{
    int temp = b.number;
    b.number = a.number;
    a.number = temp;
}
int main() 
{
    B b(12);
    A a(14);
    // Before 
    a.printValue();
    b.printValue();

    exchangeVlue(b,a);

    //After
    a.printValue();
    b.printValue();
return 0;
}