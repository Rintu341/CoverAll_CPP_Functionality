// Write class declarations and member function definitions for a C++ base
// class to represent an Employee (emp-code, name).

// Derive two classes as Fulltime (daily rate, number of days, salary) and
// Parttime (number of working hours, hourly rate, salary).

// Write a menu driven program to:

// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees

#include <iostream>
#include <string>
#define MAXEMP 100

using namespace std;

class Employee
{
    protected:
        int emp_code;
        string emp_name;
    public: 
        Employee(int e_code,string e_name):emp_code(e_code), emp_name(e_name){}
        Employee(){}
        int getEmpCode(){ return emp_code; }
        string  getEmpName(){ return emp_name; }
};

class Fulltime : public Employee
{
    private:
        float daily_rate;
        int number_of_days;
        float salary;
    public:

        Fulltime():daily_rate(0), number_of_days(0),salary(0){}

        void fulltimeEmployeeDetails()   //===> fulltime employee details
        {
            cout<<"Enter Employee Code : ";
            cin>>emp_code;
            fflush(stdin);
            cout<<"Enter Employee name: ";
            getline(cin,emp_name);

            cout<<"Enter daily rate : ";
            cin>>daily_rate;

            cout<<"Enter number of days : ";
            cin>>number_of_days;

            salary = daily_rate * number_of_days;
        }

        void showDetails()
        {
            cout<<endl;
            cout<<"..........................................."<<endl;
            cout<<"Employee code                 : "<<emp_code<<endl;
            cout<<"Employee name                 : "<<emp_name<<endl;
            cout<<"salary                        : "<<salary<<endl;
            cout<<"status                        : "<<"fulltime"<<endl;
            cout<<"..........................................."<<endl;
        }
};

class Parttime : public Employee
{
    private:
        int number_of_working_hours;
        float hourly_rate;
        float salary;
    public:
        void parttimeEmployeeDetails() //===> parttime employee details
        {
            cout<<"Enter Employee Code : ";
            cin>>emp_code;
            fflush(stdin);
            cout<<"Enter Employee name: ";
            getline(cin,emp_name);

            cout<<"Enter number_of_working_hours: ";
            cin>>number_of_working_hours;

            cout<<"Enter hourly rate : ";
            cin>>hourly_rate;

            salary = hourly_rate * number_of_working_hours;
        }
          void showDetails()
        {
            cout<<endl;
            cout<<"..........................................."<<endl;
            cout<<"Employee code                 : "<<emp_code<<endl;
            cout<<"Employee name                 : "<<emp_name<<endl;
            cout<<"salary                        : "<<salary<<"/day"<<endl;
            cout<<"status                        : "<<"parttime"<<endl;
            cout<<"..........................................."<<endl;
        }
};

int main() 
{   
    short PEMP_Count = -1,FEMP_Count = -1, choice = 0;
    char FP_choice;


    Parttime * Ptime = new Parttime[MAXEMP]; // Array of pointers  for parttime employees 
    Fulltime * Ftime = new Fulltime[MAXEMP]; // same as fulltime employees

    while(1){

        cout<<"1. Enter Record "<<endl;
        cout<<"2. Display Record "<<endl;
        cout<<"3. Search Record "<<endl;
        cout<<"4. Quit  "<<endl<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                    // Enter your Record
                    cout<<"1. Fulltime"<<endl;
                    cout<<"2. Parttime"<<endl<<endl;
                    cout<<"select option : ";
                    cin>>FP_choice;
                    switch (FP_choice)
                    {
                    case '1':
                            FEMP_Count++;
                            Ftime[FEMP_Count].fulltimeEmployeeDetails();
                        break;
                    case '2':
                            PEMP_Count++;
                            Ptime[PEMP_Count].parttimeEmployeeDetails();
                        break;
                    default:
                        cout<<"choice not match "<<endl;
                        break;
                    }

                    break;
            case 2:
                    // Dispaly Record
                    if(FEMP_Count == -1 && PEMP_Count == -1)
                        cout<<"No data avalable! "<<endl;


                    for(int  i = 0; i <= FEMP_Count; i++)
                    {
                        Ftime[i].showDetails();
                        cout<<endl;
                    }
                    for(int  i = 0; i <= PEMP_Count; i++)
                    {
                        Ptime[i].showDetails();
                        cout<<endl;
                    }

                    break;
            case 3:
                    // Search Record
                    
                    cout<<"Currently option not avalable"<<endl;
                    break;
            case 4:
                    // Quit
                    cout<<"Have A Nice Day"<<endl;
                    exit(0);
                    break;
            default:
                    cout<<"choice not match"<<endl;
                    break;
        }
    }

    // Dealocate  Dynamicaly alocated memory 
    delete Ptime;
    delete Ftime;
return 0;
}