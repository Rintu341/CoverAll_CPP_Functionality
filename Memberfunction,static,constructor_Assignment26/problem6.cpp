#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class Student{
    private:
        char *Name;
        int Roll;
        int Class;
    public:
        Student(char *name,int roll,int CLass){
            Name=name;
            Roll=roll;
            Class=CLass;
        }
        void Display(){
            cout<<"Nmae = "<<Name<<endl;
            cout<<"Roll = "<<Roll<<endl;
            cout<<"Class = "<<Class<<endl;
        }
};

int main(){
    // char *name="sujan";
    // cout<<name;
    Student s1("sujan",29,12);
    s1.Display();
    return 0;
}