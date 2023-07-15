#include <iostream>
using namespace std;
int factorial(int n);
int combination(int n, int r);
void printPascal(int x);
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >>n;
    printPascal(n);
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}
int combination(int n, int r)
{

    return factorial(n) / (factorial(n - r) * factorial(r));
}
void printPascal(int x)
{
    int k, p;
    for (int i = 1; i <= x; i++)
    {
        k = 1, p = 0;
        for (int j = 1; j <= 2 * x - 1; j++)
        {
            if (j >= x + 1 - i && j <= x + i && k)
            {
                printf("%3d", combination(i - 1, p));
                p++;
                k = 0;
            }
            else
            {
                printf("   ");
                k = 1;
            }
        }
        printf("\n");
    }
}
