// Write a C++ program to accept a password and throw an exception if the password has
//  less than 6 characters or does not contain a digit or does not contain any special
//  character or does not contain any capital letter

#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool ContainDigitOrSpecialSymbol(const string str)
{
    for (char character : str)
    {
        if (isupper(character))
        {
            return true;
        }
        else if (!isalnum(character))
        {
            return true;
        }
        else if (isdigit(character))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string u_name;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    cout << "Enter your user name : ";
    try
    {

        getline(cin, u_name);
        int length = u_name.length();

        if (length < 6) // check length of user name
            throw length_error("length must be geater then or equal to 6 ");

        if (!ContainDigitOrSpecialSymbol(u_name))
            throw runtime_error("userName should contain digits OR special symbol OR capital letter");

        cout << "Your user name is valid " << u_name << endl;
    }
    catch (const exception &e)
    {
        cout << "Error : " << e.what() << endl;
    }

    return 0;
}