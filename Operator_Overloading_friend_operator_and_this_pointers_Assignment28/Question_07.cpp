#include <iostream>
using namespace std;
/*
    Create an Integer class and overload logical not operator for that class.
*/
class Integer
{
private:
    int num;

public:
    // A default constructor is a constructor that can be called without any arguments. It initializes the object's member variables to default values.
    Integer() : num(0) {} // ':' The colon is used to initialize member variables in the constructor's initializer list.
    Integer(int N)
    { // copy constructor ==> a copy constructor is used to create a new object as a copy of an existing object of the same class.
        num = N;
    }
    Integer &operator=(int n)
    { // assignment operator
        num = n;
        return *this;
    }

    bool operator!()
    { // operator not overload
        if (!num)
            return true;
        else
            return false;
    }
};
int main()
{
    Integer I1;
    Integer I2 = 7;
    (!I1) ? cout << "It contain Zero value " << endl : cout << "It contain non-zero value " << endl;
    (!I2) ? cout << "It contain Zero value " << endl : cout << "It contain non-zero value " << endl;
    return 0;
}