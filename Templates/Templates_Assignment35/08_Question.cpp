/*
    Write a C++ Program to implement push and pop methods from stack using
    template
*/

#include <iostream>
#define MAX 100
using namespace std;

template <class X>
class Stack
{
    private:
        X top;
        X values[MAX];
    public:
        Stack():top(-1){}
        void push(X data)
        {   
            if(top == MAX-1)
                cout<<"Stack Overflow "<<endl;
            else
                values[++top] = data;
        }
        X pop()
        {   
            if(top == -1)
                cout<<"Stack Underflow "<<endl;
            else
                return values[top--];
        }
        void DisplayTop()
        {
            cout<<values[top]<<endl;
            cout<<top;
        }

};
int main() 
{
    Stack <int> Sta;
    Sta.push(8);
    Sta.push(9);
    Sta.pop();
    Sta.DisplayTop();

    // Stack <char> Sta;
    // Sta.push('e');
    // Sta.push('t');
    // Sta.pop();
    // Sta.DisplayTop();
    return 0;
}