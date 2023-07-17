#include <iostream>
using namespace std;

class LargestNumber
{
private:
    int LarNum;
public:
    int findLargestNumber(int a, int b, int c)
    {
        if (a >= b)
        {
            if (a >= c)
                LarNum = a;
            else
                LarNum = c;
        }
        else
        {
            if (b >= c)
                LarNum = b;
            else
                LarNum = c;
        }
        return LarNum;
    }
};
int main()
{
    int num1,num2,num3;
    LargestNumber l;
    cout<<"Enter three Numbers: ";
    cin>>num1>>num2>>num3;
    cout<<"Largest Number is "<<l.findLargestNumber(num1,num2,num3);
    return 0;
}