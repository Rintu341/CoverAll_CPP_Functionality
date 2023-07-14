#include <iostream>
using namespace std;

class Unary{
    private:
        int count;
    public:
        Unary(){
            count = 0;
        }
        Unary(int i)
        {
            count = i;
        }
        // Unary increment
        Unary operator++(){ // pre increment 
            count++;
            return *this;
        }
        /*
            int isn't really an argument, it doesn't mean integer.
            it's simple a signal to the compiler that the two version of 
            operator functions are different.
        */
        Unary operator++(int){// post increment
            Unary temp(count);
            count++;
            return temp;
        }

        // Unary decrement
        Unary operator--(){ // pre increment 
            count--;
            return *this;
        }

        Unary operator--(int){// post increment
            Unary temp(count);
            count--;
            return temp;
        }

        void showdata(){
            cout<<count<<endl;
        }

};
int main() 
{
    Unary a,b,c,d;


    cout<<"b = ";
    b.showdata();
    a = b++;        // a = b.operator++(int) => post increment
    cout<<"a = ";
    a.showdata();
    cout<<"b = ";
    b.showdata();
    


    cout<<"c = ";
    c.showdata();
    d = ++c;        // d = c.operator++() => pre increment 
    cout<<"d = ";
    d.showdata();
    cout<<"c = ";
    c.showdata();
    

    cout<<endl;
    Unary g,h,i,j;


    cout<<"h = ";
    h.showdata();
    g = h--;        // g = h.operator--(int) => post increment
    cout<<"g = ";
    g.showdata();
    cout<<"h = ";
    h.showdata();
    


    cout<<"j = ";
    j.showdata();
    i = --j;        // i = j.operator--() => pre increment 
    cout<<"i = ";
    i.showdata();
    cout<<"j = ";
    j.showdata();

return 0;
}