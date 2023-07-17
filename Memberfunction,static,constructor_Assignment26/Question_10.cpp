#include <iostream>
using namespace std;
class StaticCount {
    private:
        static  int var;
    public :
        void Increment(){
            var++;
        }
        int get(){
            return var;
        }
};
int StaticCount::var=0;
int main(){
    StaticCount s1;
    s1.Increment();
    cout<<s1.get()<<endl;

    s1.Increment();
    cout<<s1.get()<<endl;

    s1.Increment();
    cout<<s1.get()<<endl;
    return 0;
}