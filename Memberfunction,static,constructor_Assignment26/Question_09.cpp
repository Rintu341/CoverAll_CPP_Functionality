#include <iostream>
using namespace std;
class Bill
{
private:
    int Unit;

public:
    void set(int unit)
    {
        if (unit < 0)
        {
            cout << "electricity bill  is 0 Rupee" << endl;
        }
        Unit = unit;
    }
    /*
        Upto 100 unit RS. 1.20 per unit
        From 100 to 200 unit RS. 2 per unit
        Above 200 units RS. 3 per unit
    */
    int calculateBill()
    {
        int bill;
        if (Unit > 200)
        {
            bill = Unit * 3;
        }
        else if (200 >= Unit)
        {
            bill = 120 + (Unit - 100) * 2;
        }
        else if(Unit <= 100)
        {
            bill = Unit * 1.20;
        }
        return bill;
    }
};
int main()
{
    Bill b1, b2;

    b1.set(203);
    cout << "electricity bill is " << b1.calculateBill() << " Rupee" << endl;

    b2.set(167);
    cout << "electricity bill is " << b2.calculateBill() << " Rupee" << endl;
    return 0;
}