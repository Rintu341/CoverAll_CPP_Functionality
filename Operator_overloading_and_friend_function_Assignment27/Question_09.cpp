#include <iostream>
#include <string.h>
using namespace std;
/*
    Class mystring
    {
    char str [100];
    Public:
    // methods
    };
    Overload operator “!” to reverse the case of each alphabet in the string
    (Uppercase to Lowercase and vice versa).
*/
    class mystring{
        private:
            char  str[100];
        public:
            mystring(){
                cout<<"Enter your String : ";
                gets(str);
            }
            mystring(const char * st){
                strcpy(str,st);
            }
            void showstr(){
                cout<<str<<endl;
            }
            friend mystring operator!(mystring & m){
                for(int i=0 ;m.str[i]; i++ ){
                    if(m.str[i] >= 'A' && m.str[i]<= 'Z')
                    {
                        m.str[i]+=32;
                    }else if(m.str[i] >= 'a' && m.str[i]<= 'z'){
                        m.str[i]-=32;
                    }
                } 
                mystring temp(m.str);
                return temp;
            }
    };
int main() 
{
     mystring my;
     my.showstr();
     mystring my2 = !my;
     my.showstr();
return 0;
}