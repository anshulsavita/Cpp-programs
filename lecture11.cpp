#include<iostream>
using namespace std;

// class Student{
//     private:
//         int rollno;
//         string name;
//         int p,c,m;
//     public:
//         void getStudent(){
//             cout<<"Enter Rollno:";
//             cin>>rollno;
//             cout<<"Enter Name:";
//             cin>>name;
//         }
//         void getmarks(){
//             cout<<"Enter P C M Marks:";
//             cin>>p>>c>>m;
//         }
//         void showResult(){
//             float t=p+c+m;
//             float pr=t/3;
//             cout<<"Rollno:"<<rollno<<endl;
//             cout<<"Name"<<name<<endl;
//             cout<<"Physics:"<<p<<endl;
//             cout<<"Chemistry:"<<c<<endl;
//             cout<<"Maths:"<<m<<endl;
//             cout<<"Total:"<<t<<endl;
//             cout<<"Percentage:"<<pr<<endl;
//         }
// };
// int main(){
//     Student S1,S2; // s1 and s2 are two objects
//     // cin>>S1.rollno; // rollno can't be directly excess because it is a private member.
//     //cout<<sizeof(S1);

//     // Admin
//     S1.getStudent();
//     S2.getStudent();

//     // Faculties
//     S1.getmarks();
//     S2.getmarks();

//     // Students
//     S1.showResult();
//     S2.showResult();
// } 

// ---------------------------------------------

// class products{
//     private:
//         int code;
//         string name;
//         int price;
//         int offer;

//     public:
//         void getProducts(){
//             cout<<"Enter Code:";
//             cin>>code;
//             cout<<"Enter Name:";
//             cin>>name;
//             cout<<"Enter Price:";
//             cin>>price;
//             cout<<"Enter Offer:";
//             cin>>offer;
//         }
//         void ShowProducts(){
//             cout<<"Code:"<<code<<endl;
//             cout<<"Name:"<<name<<endl;
//             cout<<"price:"<<price<<endl;
//             cout<<"Offer:"<<offer<<endl;
//         }
//         void sale(){
//             int qty;
//             cout<<"Enter Quentity:";
//             cin>>qty;
//             int aa=qty*price;
//             int amt=qty*offer;
//             cout<<"Actual Amount:"<<aa<<endl;
//             cout<<"Amount to pay:"<<amt<<endl;
//             cout<<"U Save:"<<aa-amt<<endl;
//         }
// };
// int main(){
//     products p1;
//     p1.getProducts();
//     p1.ShowProducts();
//     p1.sale();

// }

// --------------------------------------------
/* Question --> 
class Employee
// int id
// string name 
// string salary 

// getEmployee()
// ShowEmployee()
// netSalary()
//     da salary 40%
//     hra Salary 12%
//     netSalary
*/
class Employee{
    private:
        int id;
        string name;
        int salary;
    public:
        void getEmployee(){
            cout<<"Enter Employee ID:";
            cin>>id;
            cout<<"Enter Employee Name:";
            cin>>name;
            cout<<"Enter Employyee Salary:";
            cin>>salary;
        }
        void ShowEmployee(){
            cout<<"Employee id:"<<id<<endl;
            cout<<"Employee Name:"<<name<<endl;
            cout<<"Employee Gross Salary:"<<salary<<endl;
        }
        void netSalary(){
            int da,hra,ns;
            da=salary*40/100;
            hra=salary*12/100;
            ns=salary+da+hra;
            cout<<"Employee DA:"<<da<<endl;
            cout<<"Employee HRA:"<<hra<<endl;
            cout<<"Employee Net Salary:"<<ns<<endl;
        }
};
int main(){
    Employee E1;
    E1.getEmployee();
    E1.ShowEmployee();
    E1.netSalary();

}