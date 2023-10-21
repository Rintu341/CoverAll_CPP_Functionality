// In a bank, different customers have savings account. Some customers may
// have taken a loan from the bank. So bank always maintain information about
// bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno,  balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’
// customers

#include <iostream>
#include <cstring>
using namespace std;

class customer
{
    private:
        string name;
        long long phone_number;
    public:

        void accept_C()
        {
            cout<<"Enter name : ";
            getline(cin,name);
            cout<<"Enter phone_number :";
            cin>>phone_number;
        }
        void display_C()
        {
            cout<<"name: "<<name<<endl;
            cout<<"phone number: "<<phone_number<<endl;
        }
};

class depositor : public customer
{
    private:    
        long long acc_no;
        double  balance;
    public:
        void acccept_D()
        {
            cout<<"Enter account no : ";
            cin>>acc_no;
            cout<<"Deposite balance : ";
            cin>>balance;
        }
        void display_D()
        {
            cout<<"Account no: "<<acc_no<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};
class borrower : public depositor
{
    

        private:    
        long long loan_no;
        double  loan_amt;
    public:
        void acccept_B()
        {
            cout<<"Enter loan no : ";
            cin>>loan_no;
            cout<<"Enter loan amount : ";
            cin>>loan_amt;
        }
        void display_B()
        {
            cout<<"loan no: "<<loan_no<<endl;
            cout<<"loan amount: "<<loan_amt<<endl;
        }
};
int main() 
{
    borrower * obj;
    short n;
    cout<<"Enter no of customer details you put : ";
    cin>>n;
    fflush(stdin);
    obj = new borrower[n];

    for(int i = 0; i<n; i++)
    {   
        cout<<endl<<"customer "<<i+1<<endl<<endl;
        obj[i].accept_C();
        obj[i].acccept_D();
        obj[i].acccept_B();
        fflush(stdin);
        cout<<"-----------------------"<<endl;
    }
    cout<<"------------------------------"<<endl;
    cout<<"customers details "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<endl<<"Details customer "<<i+1<<endl<<endl;
        obj[i].display_C();
        obj[i].display_D();
        obj[i].display_B();
        cout<<"-----------------------"<<endl;
    }
return 0;
}