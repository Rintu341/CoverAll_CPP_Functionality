#include <iostream> 
using namespace std;
int check_prime(int N);
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(check_prime(n)==1)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}
int check_prime(int N){
    int k=N/2;
    if(N==2||N==3)
            return 1;
    else{
            for (int i = 2; i <=k; i++)
            {
                if (N%i)
                    continue;
                else
                    return 0;
            }   
        return 1;
    } 
}  