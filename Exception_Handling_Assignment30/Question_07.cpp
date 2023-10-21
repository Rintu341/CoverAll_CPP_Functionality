#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Write a C++ program to accept a username if the username has less than 6 characters
//  or does contain any digit or special symbol
bool ContainDigitOrSpecialSymbol(const string str)
{
    for (char character : str)
    {
        if (!isalnum(character))
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
            throw runtime_error("userName should contain digits OR special symbol");

        cout << "Your user name is valid " << u_name << endl;
    }
    catch (const exception &e)
    {
        cout << "Error : " << e.what() << endl;
    }
    return 0;
}

// the cctype header is part of the Standard Library and provides functions and macros for working with character classification and manipulation. It's used for determining various properties of characters, such as whether they are letters, digits, whitespace, etc.

// Here are some commonly used functions and macros from the cctype header:

// isalnum(int c): Checks if the given character is an alphanumeric character (either a letter or a digit).

// isalpha(int c): Checks if the given character is a letter.

// isdigit(int c): Checks if the given character is a digit.

// islower(int c): Checks if the given character is a lowercase letter.

// isupper(int c): Checks if the given character is an uppercase letter.

// isspace(int c): Checks if the given character is a whitespace character (space, tab, newline, etc.).

// tolower(int c): Converts the given character to lowercase.

// toupper(int c): Converts the given character to uppercase.

// These functions and macros operate on integers (ASCII values) and are often used with characters represented as char types in C++. For example, you can use isalpha('A') to check if the character 'A' is a letter.
