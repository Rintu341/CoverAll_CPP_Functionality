#include <iostream>
#define row 3
#define column 3
using namespace std;
/*
    Class Matrix
    {
    int a[3][3];
    Public:
    //methods;
    };
    Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
    overloading).


*/
class Matrix{
    private:
        int mat[row][column]  = {0};
    public:
        Matrix(){
            cout<<"Enter matrix Element (3x3) "<<endl;
            for(int i = 0; i<row; i++){
                for(int j = 0; j<column; j++){
                    cin>>mat[i][j];
                }
            }
        }
        Matrix(int mat[][column]){
            for(int i = 0; i<row; i++){
                for(int j = 0; j<column; j++){
                    this->mat[i][j] = mat[i][j];
                }
            }
        }
        Matrix operator+(Matrix m){
            int box[row][column];
            for(int i = 0; i<row; i++){
                for(int j = 0; j<column; j++){
                    box[i][j] = this->mat[i][j] + m.mat[i][j];
                }
            }
            Matrix temp(box);
            return temp;
        }
        void showdata(){
            for(int i = 0; i<row; i++){
                for(int j = 0; j<column; j++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        
};
int main() 
{
    Matrix m1, m2;
    cout<<"first matrix :"<<endl;
    m1.showdata();
    cout<<"second matrix :"<<endl;
    m2.showdata();
    Matrix m3 = m1 + m2; 
    cout<<"Addition Matrix"<<endl;
    m3.showdata();
return 0;
}