/*
    Create Product class and convert Product type to Item type using casting operator 
    int main() 
    { 
        Item i1; 
        Product p1; 
        p1.setData(3,4); 
        i1=p1; 
        return 0; 
    } 

*/
#include <iostream>
using namespace std;
class Item{
    private:
        int price;
    public:
        Item(){}
        Item(int p)
        {   
            cout<<"Item(int) called"<<endl;
            price = p;
        }
        
        void showData()
        {
            cout<<"Item price " <<price<<endl;
        }
        int getPrice()
        {
            return price;
        }

};
class Product{
    private:
        int price;
    public:
        Product(){}
        Product(int x)
        {
            cout<<"product(int) called"<<endl;
            price = x;
        }
        Product(Item & p){ // PC to convert Product to Item

            cout<<"Item(product) called"<<endl;
            price = p.getPrice();
        }
        void setData(int p)
        {
            price = p;
        }
        
        void showData(){
            cout<<"Product price "<<price<<endl;
        }
        operator Item() // operator Product() to convert Item to Product
        {
            cout<<"Item() operator  called"<<endl;
            return price;
        }
};

int main() 
{
     Item i1; 
        Product p1; 
        p1.setData(4); 
        i1=p1; 
return 0;
}