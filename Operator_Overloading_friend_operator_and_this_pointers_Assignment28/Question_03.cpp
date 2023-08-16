/*
    Overload subscript operator [] that will be useful when we want to check for an index
    out of bound
*/
#include <iostream>

using namespace std;
class myCollege{ 
    private:
        int department[5]={101,102,103,104,105}; // Private array to store department codes

    public:
        // Overloaded subscript operator [] for custom behavior
        int& operator[](int index){
            if(index >= 0 && index <= 4){
                return department[index]; // Return reference to department code at valid index
            }
            else{
                cout<<"Array out of bound"<<endl;  // Print error message for out-of-bounds index
                return department[0];// Return reference to first department code for out-of-bounds index
            }
        }

};
int main() 
{
     myCollege m1;
     int depart = m1[3];
     cout<<"Department Code "<<depart<<endl;

     depart = m1[8];
     cout<<"Department Code "<<depart<<endl;
return 0;
}