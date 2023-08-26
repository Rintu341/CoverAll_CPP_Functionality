#include <iostream>
using namespace std;
/*
    Create a student class and overload new and delete operators outside the class.
*/
class student{
    private:
        int oper_system;
        int DBMS;
    public:
        student(int X,int Y):oper_system(X), DBMS(Y){

        }
        student(){

        }
        void* operator new[](size_t size){
            cout<<"Create memory "<<size<<endl;
            return ::operator new[](size);
        }
        void operator delete[](void * ptr){
            cout<<"Deallocate memory"<<endl;
            ::operator delete[] (ptr);
        }

};
int main() 
{
    student * ptr = new student[7];
    delete[] ptr;
return 0;
}