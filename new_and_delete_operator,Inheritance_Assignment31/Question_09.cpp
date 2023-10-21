// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    private:
        int id;
        string name;
    public:

        void set_id()
        {
            cout<<"Enter Roll no : ";
            cin>>id;
        }
        void set_name()
        {
            cout<<"Enter Name : ";
            getline(cin,name);
        }
        //
        int get_id()
        {
            return id;
        }
        string get_name()
        {
            return name;
        }
};
class StudentExam : public Student
{   
    private:
        int bengali;
        int english;
        int mathematics;
        int physics;
        int chemistry;
        int biology;
        int total = 0 ;  

    public:

        // StudentExam()
        // {
        //     bengali=english=mathematics=physics=chemistry= biology =0;
        // }
        void set_bengali()
        {
            cout<<"Enter Bengali Marks : ";
            cin>>bengali;
        }  
        void set_english()
        {
            cout<<"Enter English Marks : ";
            cin>>english;
        } 
        void set_mathematics()
        {
            cout<<"Enter Mathematics Marks : ";
            cin>>mathematics;
        } 
        void set_physics()
        {
            cout<<"Enter Physics Marks : ";
            cin>>physics;
        } 
        void set_chemistry()
        {
            cout<<"Enter Chemistry Marks : ";
            cin>>chemistry;
        } 
        void set_biology()
        {
            cout<<"Enter Biology Marks : ";
            cin>>biology;
        } 
        ///////////////
        int get_bengali()
        {
            return bengali;
        }  
        int get_english()
        {
            return english; 
        } 
        int get_mathematics()
        {
            return mathematics;
        } 
        int get_physics()
        {
            return physics;
        } 
        int get_chemistry()
        {
            return chemistry;
        } 
        int get_biology()
        {
            return biology;
        } 
        int get_total()
        {   
            total = bengali + english + mathematics + physics + chemistry + biology; 
            return total;
        }
};
class StudentResult : public StudentExam
{
    private:
        int persentage;
        
    public:
        int get_persentage()
        {   
            
            int r = get_total()*100 ;
            persentage = r/600;
            return persentage;
        }
        void display()
        {
            cout<<"########### Student MarkSheet ############"<<endl;
            cout<<"Roll no     : "<<get_id()<<endl;
            cout<<"Name        : "<<get_name()<<endl<<endl;
            cout<<"Bengali     : "<<get_bengali()<<endl;
            cout<<"English     : "<<get_english()<<endl;
            cout<<"Mathematics : "<<get_mathematics()<<endl;
            cout<<"Physics     : "<<get_physics()<<endl;
            cout<<"Chemistry   : "<<get_chemistry()<<endl;
            cout<<"Biology     : "<<get_biology()<<endl<<endl;

            cout<<" persentage : "<<get_persentage()<<"%"<<endl;
            cout<<"---------------------------------------"<<endl<<endl;
        }
};

int main() 
{
    StudentResult * ptr;
    int n;
    cout<<"Enter no of Student Marks you put : ";
    cin>>n;
    ptr = new StudentResult[n];

    for(int i = 0; i<n ; i++)
    {
        ptr[i].set_id();
        fflush(stdin);
        ptr[i].set_name();
        ptr[i].set_bengali();
        ptr[i].set_english();
        ptr[i].set_mathematics();
        ptr[i].set_physics();
        ptr[i].set_chemistry();
        ptr[i].set_biology();
    }
    
    for(int i = 0; i<n ; i++)
    {
        ptr[i].display();
    }
    return 0;
}