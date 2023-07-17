#include <iostream>
using namespace std;
class Greatest
{
public:
    int find_Largest(int num1, int num2, int num3)
    {
        if (num1 > num2)
        {
            if (num1 > num3)
                return num1;
            else
                return num3;
        }
        else
        {
            if (num2 > num3)
                return num2;
            else
                return num3;
        }
    }
};
int main()
{
    Greatest g1;
    cout << "Largest among 3 numbers = " << g1.find_Largest(8, 9, 7) << endl;
    return 0;
}