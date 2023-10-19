#include <iostream>
using namespace std;

class Matrix
{   
    private:
        int a;
        int b;
        int c;
        int d;
    public:
        virtual void calculate_determinant()=0;
        void set_data(int a,int b,int c,int d)
        {
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
        }

        int get_a(){return a;}
        int get_b(){return b;}
        int get_c(){return c;}
        int get_d(){return d;}
};

class Determinant : public Matrix
{
    public:
        void calculate_determinant()
        {
            cout<<"Determinant of martix is "<<(get_a() * get_d()) - (get_b() * get_c());
        }

};
int main() 
{
    Matrix * m;
    
    Determinant d;
    m = &d;
    m->set_data(6,4,1,2);
    m->calculate_determinant();
        
return 0;
}