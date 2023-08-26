#include <iostream>
using namespace std;

/*
    Create a class Marks that have one member variable marks and one member
    function that will print marks. We know that we can access member functions using
    (.) dot operator. Now you need to overload (->) arrow operator to access that
    function.

*/
class Marks{
    private:
        int marks;
    public:
        Marks(){}
        Marks(int x):marks(x){}
        void printMarks(){
            cout<<"marks "<<marks<<endl;
        }
        Marks* operator->(){
            return this;
        }
};

int main() 
{
     Marks m1(81);
     m1->printMarks();
return 0;
}