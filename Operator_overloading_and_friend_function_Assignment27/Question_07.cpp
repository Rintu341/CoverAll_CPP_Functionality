#include <iostream>
using namespace std;
/*
    class fraction
{
        long numerator;
        long denominator;
        Public:
        fraction (long n=0, long d=0);
        }
        Overload the following operators as member or friend:
        a) Unary ++ (pre and post both)
        b) Overload as friend functions: operators << and >>.
        Output-

*/
    class fraction{
        private:
                long numerator;
                long denominator;

        public:
            fraction():numerator(0),denominator(0){}

            fraction(int nume,int denom){
                numerator = nume;
                denominator = denom;
            }
            fraction operator++() // post increment
            {
                numerator++;
                denominator++;
                return *this;
            }
            fraction operator++(int){ // pre increment , there 'int' is used for differentiate function signature
                fraction temp(numerator,denominator);
                numerator++;
                denominator++;
                return temp; 
            }
            friend void operator<<(ostream&,fraction&);
            friend void operator>>(istream&,fraction&);
    };
    void operator<<(ostream & cout,fraction &f){  //  Insertion operator
            cout<<f.numerator<<"/"<<f.denominator<<endl;
    }
    void operator>>(istream& cin,fraction & f) {   //   Ectraction operator
            cout<<"numerator : ";
            cin>>f.numerator;
            cout<<"denominator : ";
            cin>>f.denominator;
    }


int main()
{
    fraction f1,f2;
    cout<<"f1 : ";
    cout<<f1;

    cout<<"f2 : ";
    cout<<f2;

    cout<<"Enter 1st fraction value "<<endl;
    cin>>f1;

    cout<<"f1++ : ";
    f1++;
    cout<<f1;

    cout<<"++f1 : ";
    ++f1;
    cout<<f1;
    
    cout<<"Enter 2nd fraction value "<<endl;
    cin>>f2;

    cout<<"f2 = ++f1"<<endl;
    f2 = ++f1;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;

    cout<<"f2 = f1++"<<endl;
    f2 = f1++;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    return 0;
}
