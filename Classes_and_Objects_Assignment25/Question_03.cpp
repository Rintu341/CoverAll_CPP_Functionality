#include <iostream>
using namespace std;
class Factorial
{
private:
    int factorial = 1;

public:
    int findFactorial(int r)
    {
        if (r == 1)
            return 1;
        else
            return factorial = r * findFactorial(r - 1);
    }
};
int main()
{
    int num;
    cin >> num;
    Factorial f;
    cout << num << " Factorial = " << f.findFactorial(num);
    return 0;
}