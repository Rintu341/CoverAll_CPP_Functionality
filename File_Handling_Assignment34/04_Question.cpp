#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() 
{
    fstream fileObj;
    string file1 = "temp2.txt";
    string file2 = "temp3.txt";
    string line;
    fileObj.open(file1,ios::app|ios::in|ios::out);
    if(fileObj)
    {   
        while(fileObj){
            getline(cin,line);

            if(line == "-1")  
                break;
            
            fileObj<<line;
            fileObj<<"\n";
        }
    }else
    {
        cout<<"error: file not created"<<endl;
    }
    
    // copy content of one file to another
    ofstream fout;
    fout.open(file2,ios::app);
    fileObj.seekg(0,ios::beg);// set file pointer to begining of file
    while(fileObj)
    {
        getline(fileObj,line);
        fout<<line<<"\n";
    }
    fout.close();
    fileObj.close();
    return 0;
}