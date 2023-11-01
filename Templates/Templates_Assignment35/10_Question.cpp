/*
    Write a C++ program to implement Hash Table using Template Class.
*/

#include <iostream>
#include <cmath>
#define MAX  20
using namespace std;
template <class X>

void  hashTable(X h_arr[],int value)
{
    h_arr[value % 20] = value;
}
int main() 
{
    int hash_table[MAX];

    hashTable(hash_table,12);
    cout<<hash_table[12]<<endl;   
    return 0;
}