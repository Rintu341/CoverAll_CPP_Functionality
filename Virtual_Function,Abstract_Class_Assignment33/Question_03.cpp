#include <iostream>
using namespace std;

class A
{
    private:
        int num;
    
    public:
        A(int num):num(num){}

        int get_data()
        {
            return num;
        }
        void swap(A * obj)
        {
            int temp = obj->get_data();
            
        }
};
int main() 
{
     
return 0;
}