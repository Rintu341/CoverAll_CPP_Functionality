#include <iostream>
#include <string.h>
using namespace std;
/*
    a) Overload the + operator to concatenate two strings.
    b) == to compare 2 strings
*/
class CString{
    private:
        char str[100];
    public:
        CString(){
            cout<<"Enter your String : ";
            cin.getline(str,100);
        }
        CString(const char * st){
            strcpy(str,st);
        }
        void showstr(){
            cout<<str<<endl;
        }
        CString operator+(CString cs){
            char * join;
            strcpy(join,strcat(this->str,cs.str));
            CString temp(join);
            return temp;
        }
        bool operator==(CString cs){
            if(strcmp(this->str,cs.str) == 0)
                return true;
            return false;
        }
};
int main() 
{
    CString cs1,cs2;
    cs1.showstr();
    cs2.showstr();
    CString cs3 = cs1 + cs2;
    cs3.showstr();
    // cout<<strcmp("Sujan","sujan")<<endl;
    (!(cs1 == cs2))?cout<< "both are same"<<endl : cout<<"both are not smae"<<endl;

return 0;
}