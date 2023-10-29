#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream fout;  // ofstream class object is used for print on a file just like 'cout'
    // open() create file if it not create then open ,Open for input. Default for ofstream.

    // fout.open("i:/temp.txt",ios::app); //==> generate an error

    fout.open("temp.txt",ios::app);   
    try{
        if(fout) // if incase file not created  fout(object) return 'null'
        {
            cout<<"file created successfully"<<endl;
        }else{
            throw runtime_error("file not created");
        }
        
    }catch(exception & e)
    {
        cout<<"error : "<<e.what()<<endl;
    }
    fout.close(); // if open() a file then you  also close() it after operation  
    return 0;
}