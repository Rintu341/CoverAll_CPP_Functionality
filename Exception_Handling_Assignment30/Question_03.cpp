/*
    Write a C++ program to perform arithmetic operations on two numbers and throw an
    exception if the dividend is zero or does not contain an operator
*/
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    char Operator;
    int result;
    try
    {
        cout << "Enter  First Number : ";
        cin >> num1;

        fflush(stdin);

        cout << "Enter operator : ";
        cin >> Operator;

        if (Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
            throw invalid_argument("Invalid operator");

        cout << "Enter Second Number : ";
        cin >> num2;

        if (num2 == 0)
            throw runtime_error("dividend can not be zero");

        switch (Operator)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            break;
        }

        cout << "result is " << result << endl;
    }
    catch (exception &e)
    {
        cout << "Error : " << e.what() << endl;
    }

    return 0;
}