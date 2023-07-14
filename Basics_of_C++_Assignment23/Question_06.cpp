#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three number: ";
    cin >> a >> b >> c;
    int avg;
    avg = (a + b + c) / 3;
    cout << "average of 3 number = " << avg;
    return 0;
}