#include <iostream>
using namespace std;
class Counter{
    private:
        int  Count = 10;
    public:
        Counter(){
            cout<<Count;
        }
};
int main(){
    Counter c1;
    return 0;
}