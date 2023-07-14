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
        Overload the - (Unary) should negate the numbers stored in the object.

*/
class Matrix{
    private:
        int mat[row][column]  = {0};
    public:
        Matrix(){
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
        void showdata(){
            for(int i = 0; i<row; i++){
                for(int j = 0; j<column; j++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix operator-(){
            for(int i = 0; i<row ; i++){
                for(int j = 0; j<column; j++){
                    this->mat[i][j] = -mat[i][j];
                }
            }
            return Matrix(mat);
        }
};
int main() 
{   
    cout<<"Enter Matrix element (3x3) : "<<endl;
    Matrix m1;
    cout<<"Matrix is : "<<endl;
    m1.showdata();

    cout<<"Now Matrix is: "<<endl;
    Matrix m2 = -m1;
    m2.showdata();
    

return 0;
}