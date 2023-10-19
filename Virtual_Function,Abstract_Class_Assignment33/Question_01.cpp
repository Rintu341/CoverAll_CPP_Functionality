#include <iostream>
using namespace std;

// note :
// 1. if at least one pure virtual function exsit into a class then that class become an abstruct class
// so, you can't create an object of a class
// 2. if you derived an abstruct class then  you should define that pure virtual  function  and  
// it also become a virtual function
class Shape
{   
    protected:
        int arg_1;
        int arg_2;
    public:
        Shape(){}
        void get_data(int first ,int second)
        {
            this->arg_1 = first;
            this->arg_2 = second;
        }
        virtual void display_area()=0;

};
class triangle : public Shape 
{
    
    public:
        triangle(){}
        void display_area()
        {
            cout<<"area of Triangle is "<<(0.5*arg_1*arg_2)<<endl;
        }

};
class rectangle: public Shape 
{
    public:
        rectangle(){}
            void display_area()
            {
                cout<<"area of rectangle is "<<arg_1*arg_2<<endl;
            }

};
void calculate_area(Shape * ptr)
{   
    int first_arg;
    int second_arg;
    cout<<"Enter first argument : ";
    cin>>first_arg;
    cout<<"Enter second argument : ";
    cin>>second_arg;
    ptr->get_data(first_arg , second_arg);
    ptr->display_area();
}
int main() 
{   short choice;
    cout<<"Calculate Area "<<endl;
    cout<<"1. Rectangle "<<endl;
    cout<<"2. Triangle "<<endl<<endl;
    
    cout<<"Enter your choice : "; 
    cin>>choice;

    if(choice == 1){
        triangle t;
        calculate_area(&t);
    }else if(choice == 2)
    {
        rectangle r;
        calculate_area(&r);
    }
return 0;
}