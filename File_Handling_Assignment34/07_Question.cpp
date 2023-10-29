#include<iomanip>
#include<iostream>
#include<fstream>
#include<string.h>

#define MAX 3
using namespace std;
/*
    There are 50 records in a file. Each record contains 6-character item-code, 20
    characters for item-name and an integer price. Write a program to read these
    records, arrange them in the descending order of price and write them in the same
    file, overwriting the earlier records
*/
class Item
{
    private: 
        int item_code;
        string item_name;
        int price;
    public:
        void AcceptData(string);
        void DisplayData();
        friend void Sort(Item  obj[])
        {
            for(int step = 0; step<MAX - 1 ; step++)
            {
                for (int j = step; j <MAX - step -1;j++)
                {
                    if(obj[step].price > obj[step+1].price)
                    {
                        Item temp = obj[step];
                        obj[step] = obj[step+1];
                        obj[step+1] = temp;
                    }
                }
            }
        }
        friend void overWrite(Item obj[],string file_name)
        {
            ofstream fout;
            fout.open(file_name,ios::trunc|ios::out);
            if(!fout)
                cout<<"error : file not open"<<endl;
                for(int i = 0; i<MAX; i++)
                {
                    fout<<obj[i].item_code<<'\n';
                    fout<<obj[i].item_name<<'\n';
                    fout<<obj[i].price<<'\n';
                }
            fout.close();
        }
};
void Item::AcceptData(string file_name)
{
    ofstream fout;
    fout.open(file_name,ios::out);
    if(!fout)
    {
        cout<<"file con not open "<<endl;
    }
    string line; 
        cout<<"Enter Item code: "<<endl;
        cin>>item_code;
        fout<<item_code<<'\n';
        cin.get();
        cout<<"Enter item name "<<endl;
        getline(cin,item_name);
        fout<<item_name<<'\n';
        cout<<"Enter item price "<<endl;
        cin>>price;
        fout<<price<<'\n';
    fout.close();
}
void Item::DisplayData()
{
    cout.setf(ios::left, ios::adjustfield);
    cout<<setw(8)<<item_code<<setw(8)<<item_name;

    cout.setf(ios::right, ios::adjustfield);
    cout<<setw(8)<<price<<endl;
}

int main()
{
    fstream file;
    string file_name = "input.txt";
    Item it[MAX];

    for(int i = 0; i<MAX; i++){
        it[i].AcceptData(file_name);
        cout<<"------------------------------------\n";
    }

    cout<<"Display data \n";
    cout<<"------------------------------------\n";
    for(int i = 0 ;i<MAX ;i++)
        it[i].DisplayData();

    Sort(it);
    

    overWrite(it,file_name);
    cout<<"Display data \n";
    cout<<"------------------------------------\n";
    for(int i = 0 ;i<MAX ;i++){

        it[i].DisplayData();
    }
    
    
    return 0;
}