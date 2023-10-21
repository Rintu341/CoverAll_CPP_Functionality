// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base
// classes.
// Write necessary member functions.

#include <iostream>
#include <cstring>
using namespace std;

class worker
{
    private:
        int code;
        string name;
        float salary;
    public:
        void set_code()
        {
            cout<<"Enter code        :";
            cin>>code;
        }
        void set_name()
        {
            cout<<"Enter name        :";
            getline(cin,name);
        }
        void set_salary()
        {
            cout<<"Enter salary      :";
            cin>>salary;
        }

        int get_code()
        {
            return code;
        }
        string get_name()
        {
            return name;
        }
        float get_salary()
        {
            return salary;
        }
};
class officer
{
    private:
        float DA;  // Dearness Allowance
        float HRA; //HRA full form is House Rent Allowance
    public:
        float get_DA()
        {
            return DA;
        }
        float get_HRA()
        {
            return HRA;
        }
        void set_DA()
        {
            cout<<"Enter DA          :";
            cin>>DA;
        }
        void set_HRA()
        {
            cout<<"Enter HRA         :";
            cin>>HRA;
        }
        
};
class manager : public worker ,public officer
{
    private:
        float TA;  //TA is 10% of salary
        float gross_salary;
    public:
        float get_TA()
        {
            TA = 10 *(get_salary()/100);
            return TA;
        }
        float get_grossS()
        {
            gross_salary = get_salary() + get_DA() + get_HRA() + get_TA();
            return gross_salary;
        }
        void display()
        {
            cout<<"Manager Details "<<endl;
            cout<<"Code        : "<<get_code()<<endl;
            cout<<"Name        : "<<get_name()<<endl<<endl;
            cout<<"salary      : "<<get_salary()<<endl;
            cout<<"DA          : "<<get_DA()<<endl;
            cout<<"HRA         : "<<get_HRA()<<endl;
            cout<<"TA          : "<<get_TA()<<endl;
            cout<<"Gross salary: "<<get_grossS()<<endl;
            cout<<"---------------------------------------"<<endl<<endl;
        }

};
int main() 
{
    manager * ptr;
    int n;
    cout<<"Enter manager count : ";
    cin>>n;
    ptr = new manager[n];

    for(int i = 0; i<n ; i++)
    {
        cout<<"Worker information for "<<i+1<<endl;
        ptr[i].set_code();
        fflush(stdin);
        ptr[i].set_name();
        ptr[i].set_salary();
        ptr[i].set_DA();
        ptr[i].set_HRA();
    }
    cout<<endl;
    for(int i = 0; i<n ; i++)
    {
        ptr[i].display();
    }
    return 0;
}