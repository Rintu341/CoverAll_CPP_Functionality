#include <iostream>
#include <math.h>
using namespace std;
class photon
{
    private:    
        double wavelength;

    public:
        virtual void calculate_photon() = 0;
        void set_data()
        {
            cin>>wavelength;
        }
        double get_data(){return wavelength;}
};
// E = hv when you calculate energy by frequency
// v = c(speed of light)/ ⁁(wavelength)
// E = hc/⁁ ;
class Energy : public photon
{
    public:
        void calculate_photon()
        {
            double wl;
            cout<< "Enter photon's wavelength in(nm) : "; // wavelength calculated in nm
            set_data();

            double energy = ((6.6261 * pow(10,-34))* (3*pow(10,8)))/(get_data() * pow(10,-9));
            cout<<"photon's energy is "<<energy<<" J/photon"<<endl;
        }
};
int main() 
{
    Energy e;
    e.calculate_photon();

return 0;
}