#include <iostream>
using namespace std;
class Cube{
    private:
        int a;
    public:
        Cube(int b){
            a=b;
        }
        int calculateVolume(){
            return a*a*a;
        }
};
int main(){
    Cube c1(6);
    cout<<"Volume of Cube = "<<c1.calculateVolume()<<endl;
    return 0;
}