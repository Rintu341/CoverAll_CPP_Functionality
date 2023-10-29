#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void  writeOnFile( string file_name)
{   
    ofstream fout;
    fout.open(file_name,ios::app);
    string line;
    if(fout)
    {   
        while(fout){
            getline(cin,line);

            if(line == "-1")  
            {
                
                break;
            }
            
            fout<<line;
            fout<<'\n';
        }
    }else
    {
        cout<<"error: file not created"<<endl;
    }
    fout.close();
}
void mergefile(string &file1,string &file2,string &margeFile)
{
    fstream fout;
    ifstream fin;
    string line;
    fout.open(margeFile,ios::app);
    
    //for 1st file
    fin.open(file1,ios::in);
    // fin.seekg(0,ios::beg);// set file pointer to begining of file
    while(fin)
    {
        getline(fin,line);
        fout<<line<<"\n";
    }
    fin.close();
    // for 2nd file
    fin.open(file2,ios::in);
    // fin.seekg(0,ios::beg);// set file pointer to begining of file
    while(fin)
    {
        getline(fin,line);
        fout<<line<<"\n";
    }
    fout.close();
}
void displayfile(string &file)
{
    ifstream fin;
    string line;
    fin.open(file,ios::in);
    while(fin)
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();
}
int main() 
{
    string file1 = "file1.txt";
    string file2 = "file2.txt";

    string merge = "merge.txt";
    cout<<"Enter 1st file content:"<<endl;
    writeOnFile(file1);
    cout<<"Enter 2nd file content:"<<endl;
    writeOnFile(file2);

    mergefile(file1,file2,merge);

    cout<<"merge file content:"<<endl;
    displayfile(merge);

    return 0;
}