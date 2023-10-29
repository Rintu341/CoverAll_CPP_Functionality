#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
    A file 'Employee.txt' contains empno and empname. Write a C++ program to add and
    read contents of this file and search for an employee whose name is 'XYZ'
*/
class Employee
{   
    private:
        int empno;
        string empname;
    friend void AcceptData(Employee & e,string file_name)
    {   
        ofstream outfile;
        outfile.open(file_name,ios::out|ios::app);
        cout<<endl<<"Enter empno,empname :"<<endl;
        cin>>e.empno;
        cin.get();
        getline(cin,e.empname);
        outfile.write(reinterpret_cast<const char*>(&e),sizeof(e));
        outfile.close();
    }
    friend void DisplayData(Employee & e,string file_name)
    {
        ifstream infile;
        infile.open(file_name,ios::in);
        while(infile.read(reinterpret_cast<char *>(&e),sizeof(e)))
        {
            cout<<e.empno<<'\t'<<e.empname<<endl;
        }
    }
    friend bool  search(Employee & e ,string file_name)
    {
        ifstream infile;
        bool flag = false;
        int eno;
        infile.open(file_name,ios::in);
        cout<<"Enter EMP no : ";
        cin>>eno;
        while(infile.read(reinterpret_cast<char *>(&e),sizeof(e)))
        {   
            if(eno == e.empno){
                cout<<e.empno<<":"<<'\t'<<e.empname<<endl;
                flag = true;
            }
        }
        return flag;
    }
    
};


int main() 
{
    Employee e;
    string file_name = "Employee.txt";
    char ch ='Y';
    char choice;
    cout<<"1. Accept Data "<<endl;
    cout<<"2. Display Data "<<endl;
    cout<<"3. Search Employee by EMP no "<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    switch (choice)
    {
    case '1': // Add data
            while(ch == 'Y'||ch == 'y')
            {
                AcceptData(e,file_name);
                cout<<"Add another (Y/N): ";
                cin>>ch;
            }
        break;
    case '2':   //Display data
            DisplayData(e,file_name);
        break;
    case '3': // search option
            if(!search(e,file_name))
                cout<<"Given eno not exist in DataBase"<<endl;
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }
    return 0;
}