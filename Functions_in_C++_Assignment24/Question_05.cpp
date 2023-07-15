#include <iostream>
using namespace std;
int Fibonacci(int N);

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(Fibonacci(n)==1)
        cout<<"in a Fibonacci series";
    else
        cout<<"Not in a Fibonacci series";


}
int Fibonacci(int N)
{
    int n1 = 0, n2 = 1;
    int S;
    if (N == 1 || N == 0)
        return 1;
    else
    {
        for (int i = 3; i <= N; i++)
        {
            S = n1 + n2;
            n1 = n2;
            n2 = S;
            if(N==S)
                return 1;
        }
    }
}
