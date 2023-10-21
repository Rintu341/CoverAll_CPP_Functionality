//      Write a C++ program to calculate the percentage of a student using multi-level
//      inheritance. Accept the marks of three subjects in base class. A class will be derived
//      from the above mentioned class which includes a function to find the total marks
//      obtained and another class derived from this class which calculates and displays the
//      percentage of students

#include <iostream>

using namespace std;

class Base
{
    private:
        int physics;
        int chemistry;
        int mathematics;
    protected:
        int getPhysics()
        {
            return physics;
        }
        int getChemistry()
        {
            return chemistry;
        }
        int getMathematics()
        {
            return mathematics;
        }
    public:
        void acceptMarks()
        {
            cout<<"enter physics , chemistry , mathematics marks repectively :";
            cin>>physics>>chemistry>>mathematics;
        }
};
class Derived : public Base
{
    private:
        int totalMarks;
    public:
        int calTotalMarks()
        {
            totalMarks = getPhysics() + getChemistry() + getMathematics();
            return totalMarks;
        }
    
};
class last : public Derived
{
    private:
        float persentage;
    
    public:
        float marksPersentage()
        {
            acceptMarks();
            persentage = calTotalMarks()/3.0;
            return persentage;
        }
};
int main() 
{
     last l1;
     cout<<"Student Marks persentage is "<<l1.marksPersentage()<<"%"<<endl;
return 0;
}