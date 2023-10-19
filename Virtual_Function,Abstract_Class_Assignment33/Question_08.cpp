#include <iostream>
#include <math.h>
using namespace std;
class Proof
{
    private:
        int a;
        int b;
        int c;

    public:
        virtual void isrRightAngle() = 0;
        void set_data(int a, int b, int c)
        {
            this->a = a;
            this->b = b;
            this->c = c;

        }
        inline int get_a(){return a;}
        inline int get_b(){return b;}
        inline int get_c(){return c;}

};
class Compute : public Proof
{
    public:
        void isrRightAngle()
        {
            // using pythagoras theorem : hypotenuse^2 = opposite^2 + adjacent^2
            if((get_c()*get_c()) == pow(get_a(),2)+ pow(get_b(),2)) 
                cout<<"triangle is a right angle"<<endl;
            else    
                cout<<"triangle is not a right angle"<<endl;
        }

};                                   
int main() 
{
    Proof * p;

    Compute obj;
    p = &obj;

    int a,b,c;
    cout<<"Enter adjacent , opposite & hypotenuse respectively :";
    cin>>a>>b>>c;
    p->set_data(a,b,c);
    p->isrRightAngle();
    return 0;
}