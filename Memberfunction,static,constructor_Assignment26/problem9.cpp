#include <iostream>
using namespace std;
class Bill
{
private:
    int unit;

public:
    void getDetail()
    {
        cout << "Enter Customer unit consumption: ";
        cin >> unit;
        if (unit < 0)
            unit = -unit;
    }
    float calculateBill()
    {
        if (100 >= unit)
            return unit * 1.20;
        else if (200 >= unit)
            return (100 * 1.20) + (unit - 100) * 2;
        else if (unit > 200)
            return  (100 * 1.20) + (100 * 2) + (unit - 200) * 3;
        else
            cout << "Invalid input" << endl;
        return 0;
    }
};
int main()
{
    Bill b1;
    b1.getDetail();
    cout << "Customer electricity bill = " << b1.calculateBill() <<" Rs"<<endl;
    return 0;
}