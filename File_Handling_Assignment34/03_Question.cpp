#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream fout;
    string line;
    string file_name = "a.txt";
    fout.open(file_name,ios::app);
    
    if(fout)
    {   
        while(fout){
            getline(cin,line);

            if(line == "-1")  
                break;
            
            fout<<line;
            fout<<"\n";
        }
    }else
    {
        cout<<"error: file not created"<<endl;
    }
    fout.close();

    ifstream fin;
    fin.open(file_name,ios::in);
    while(fin)
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}