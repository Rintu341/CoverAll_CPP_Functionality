#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
    Write a C++ program to read a text file and count the number of characters in it.
*/
int main() 
{
    ofstream fout;
    string line;
    string file_name = "temp1.txt";
    fout.open(file_name,ios::app);
    
    if(fout)
    {   
        while(fout){
            getline(cin,line);

            if(line == "-1")  //condition  if "-1" occur  stop geting output on a file
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
    int noOfChar = 0;
    while(fin)
    {
        getline(fin,line); // get line one by one 
        noOfChar += line.length(); // and calculate no Of character present in file
    }
    cout<<"In file "<<noOfChar <<" character is present"<<endl;
    fin.close();
    return 0;
}