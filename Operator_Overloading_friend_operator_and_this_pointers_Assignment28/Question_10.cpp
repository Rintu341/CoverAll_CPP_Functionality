#include <iostream>
using namespace std;
/*
    Create a Distance class having 2 instance variable feet and inches. Also create
    default constructor and parameterized constructor takes 2 variables . Now overload ()
    function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
    inches = a+b + 15.
*/
class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance():feet(0),inches(0){} // default costructor
        Distance(int F ,int I):feet(F),inches(I){}// parameterized Constructor
        void operator()(int a ,int b,int c){
            feet = a + c + 5;
            inches = a + b + 15;
        }
        void showdata(){
            cout<<feet <<" "<<inches<<endl;
        }
};


int main() 
{
    Distance d1,d2(4,1);
    d1.showdata();
    d2.showdata();    
    d1(2,4,6); // d2.operator(2,4,6);
    d2(3,5,7); // d2.operator(3,5,7);
    d1.showdata();   
    d2.showdata();    

return 0;
}