#include <iostream>
#include <fstream>
#include <string>
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
void count(int & noChar,int &noWord, int & noLine,string &file_name)
{
    ifstream fin;
    string line;
    fin.open(file_name,ios::in);
    noChar = 0;
    noWord = 0;
    noLine = 0;
    while(fin)
    {
        getline(fin,line); // get line one by one 
        noChar += line.length(); // and calculate no Of character present in file
        noLine++;
        string temp;
        for(int i = 0; i<line.length();i++)
        {
            if(line[i] == ' ' && !temp.empty())
            {
                noWord++;
                temp.erase();
            }else
            {
                temp.push_back(line[i]);
            }
        }
        if(line[line.length() - 1] != ' ');
            {
                noWord++;
            }
    }
    noWord--; // because every time one line extra add for '\n'
    noLine--;
    fin.close();
}
int main() 
{
    string file1 = "file3.txt";
    int noChar;
    int noWord;
    int noline;
    writeOnFile(file1);
    count(noChar,noWord,noline,file1);
    cout<<"no of character "<< noChar<<"\n no of word "<<noWord<<" \n no of line "<<noline<<endl;
    return 0;
}