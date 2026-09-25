#include<iostream>
using namespace std;
// components of OOPS
// ---------------------
// class & objects
// ----------------------
// Syntax -->
// class <classname>{
//     private:
//         =======
//         =======
//     public:
//         =======
//         =======
// };

// Private members can be accessed only inside the class.
// Public members can be accessed from outside the class.

// for example -->
class Student{
    private:
        /* DATA MEMBERS / INSTANCE VARIABLES
        Variables declared inside a class are called data members.*/
        int rollno;
        string name;
        int p,c,m;
    public:
        /* MEMBER FUNCTION / METHOD
        A function declared inside a class is called a member function.*/
        void getStudent(){
            cout<<"Enter Rollno:";
            cin>>rollno;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter P C M Marks:";
            cin>>p>>c>>m;
        }

        void showResult(){
            float t=p+c+m;
            float pr=t/3;
            cout<<"Rollno:"<<rollno<<endl;
            cout<<"Name"<<name<<endl;
            cout<<"Physics:"<<p<<endl;
            cout<<"Chemistry:"<<c<<endl;
            cout<<"Maths:"<<m<<endl;
            cout<<"Total:"<<t<<endl;
            cout<<"Percentage:"<<pr<<endl;
            
        }
};
int main(){
    Student S1,S2; // s1 and s2 are two objects
    //cout<<sizeof(S1);
    S1.getStudent();
    S2.getStudent();

    S1.showResult();
    S2.showResult();
} 