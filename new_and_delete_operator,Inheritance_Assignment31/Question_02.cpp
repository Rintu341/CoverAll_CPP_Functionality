/*
    Write a C++ program to add two numbers using single inheritance. Accept these two
    numbers from the user in base class and display the sum of these two numbers in
    derived class
*/
#include <iostream>
using namespace std;

class base
{
    private:
        int num1;
        int num2;
    protected:
        int getNum1()
        {
            return num1;
        }
        int getNum2()
        {
            return num2;
        }
    public:
        base():num1(0),num2(0)
        {

        }
        void inputNumbers()
        {
            cout<<"Enter first and second number : ";
            cin>>num1>>num2;
        }
        void baseDisplay()
        {
            cout<<num1<<" "<<num2<<endl;
        }

};
class drived : public base
{   
    private:
        int sum;
    public:
        int addNumbers()
        {
            sum = getNum1() + getNum2();
            return sum;
        }
};
int main() 
{
    drived d;
    d.inputNumbers();
    cout<<"sum of two numbers "<<d.addNumbers()<<endl;
    

return 0;
}