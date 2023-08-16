#include <iostream>
using namespace std;
/*
    Create a student class and overload new and delete operators as a member function
    of the class.
*/
class myclass{
    private :
        int num;
        int num1;
    public:
        myclass(int p , int q): num(p), num1(q){}
        myclass(){}
        void * operator new(size_t size){
            cout<<"Create custom memory "<<size<<endl;
            return ::operator new(size); // call  global new operator
        } 
        void operator delete(void* ptr){
             ::operator delete (ptr); // call global delete operator
        }
};
int main() 
{
    // myclass c(6,7);
    myclass* ptr = new myclass;
    cout<<sizeof(ptr);
    delete ptr;
    return 0;
}