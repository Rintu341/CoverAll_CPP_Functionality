#include <iostream>
using namespace std;
    /* 
    class Numbers
    {
    int x,y,z;
    public:
    // methods
    };
    Overload the operator unary minus (-) to negate the numbers
    
    */

class Numbers{
    private:
        int x,y,z;
    public:
        Numbers(): x (0) , y (0) , z (0){}

        void setdata(int x,int y, int z){
            this->x = x;
            this->y = y;
            this->z = z;
        }
        void showdata(){
            cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
        }

        // Both are possible

        friend Numbers operator-(Numbers &);
        /*
        // Numbers operator-(){
        //     x = -x;
        //     y = -y;
        //     z = -z;
        //     return *this;
        // } 
        */
        
};
    Numbers operator-(Numbers &num){
        num.x = -num.x;
        num.y = -num.y;
        num.z = -num.z;
        return num;
    }
int main() 
{
     Numbers n,m;
     n.showdata();
     n.setdata(2,4,1);
     m = -n;
     n.showdata();
     m.showdata();
return 0;
}