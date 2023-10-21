/*
    Define a class Person with instance members name and age. Also define member
    functions setName(), setAge(), getName(), getAge(). Now define class Employee by
    inheriting Person class. In the Employee class define empid and salary as instance
    members. Also define setEmpid, setSalary, getEmpid, getSalary
*/

#include <iostream>
#include <string.h>
// #include <string>
using namespace std;

class Person
{
protected: // Derived class can access this variables
// private: 
    int age;
    string name;

public:
    void setName()
    {
        cout << "Enter your Name : ";
        getline(cin,this->name);
    }
    void setAge()
    {
        cout << "Enter your Age : ";
        cin >>age;
    }
    int getAge()
    {
        return age;
    }
    string getNmae()
    {
        return name;
    }
};
class Employee : public Person
{
private:
    int empId;
    int salary;

public:
    void setEmpId()
    {
        cout << "Enter Your Employee ID : ";
        cin >> this->empId;
        cout<<name<<endl;
    }
    void setSalary()
    {
        cout << "Enter Your Salary : ";
        cin >> this->salary;
    }
    int getEmpId()
    {
        return empId;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    Person p1;
    Employee e1;
    e1.setName();
    // char *e_name = e1.getNmae();
    cout <<e1.getNmae() << endl;
    e1.setAge();
    cout << e1.getAge() << endl;
    // e1.setEmpId();
    return 0;
}