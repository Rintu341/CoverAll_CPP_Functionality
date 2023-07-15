#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int arr[10] = {0};
    int digit;
    while (n != 0)
    {
        digit = n % 10;
        arr[digit] = 1;
        n = n / 10;
    }
    int i;
    for (i = 9; i >= 0; i--)
    {
        if (arr[i] == 1)
            break;
    }
    cout << "Highest digit in given Number is " << i;
}
