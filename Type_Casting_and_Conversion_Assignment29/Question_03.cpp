/*

    Create a Product class and convert Product type to Item type using constructor 
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
        
        void setData(int p)
        {
            price = p;
        }
        int getPrice()
        {
            return price;
        }
        void showData(){
            cout<<"Product price "<<price<<endl;
        }

};
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
        Item(Product & p){ // PC to convert Product to Item

            cout<<"Item(product) called"<<endl;
            price = p.getPrice();
        }
        void showData()
        {
            cout<<"Item price " <<price<<endl;
        }
        operator Product() // operator Product() to convert Item to Product
        {
            cout<<"product() operator  called"<<endl;
            return price;
        }

};
int main() 

{
        Product p1; 
        Item i1; 
        p1.setData(3); 
        i1 = p1; 
        p1 = i1;
        p1.showData();
        i1.showData();
return 0;
}