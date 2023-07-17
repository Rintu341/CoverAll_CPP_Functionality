#include <iostream>
using namespace std;

class Cube{
    private: 
        int Edge;
    public:
        Cube(int edge ){
            Edge = edge;
        }
        int CubeVolume(){
            return (Edge*Edge*Edge);
        }

};
int main() 
{
     Cube  c1(6);
     cout<<"Cube Volume is "<<c1.CubeVolume()<<endl;
return 0;
}