#include<iostream>
using namespace std;

// functions
// ------------

// void table(int n){
//     int i,t;
//     for(i=1;i<=10;i++){
//         t=n*i;
//         cout<<n<<"x"<<i<<"="<<t<<endl;
//     }
// }
// int factorial(int n){
//     int t=1;
//     for(int i=n;i>=1;i--){
//         t=t*i;
//     }
//     return t;
// }
// void address(){
//     cout<<"numeric Infosystems Pvt Ltd"<<endl;
//     cout<<"Gandhu Road,Thatipur"<<endl;
// }
// int main(){
//     // table(35);
//     // table(20);
//     // int k=factorial(7);
//     // cout<<k<<endl;
//     address();
// }

/*
components of OOPS
---------------------
class & objects
----------------------
- class is a factory which is use to produce an object 
- Classes are logical abstraction while objects have physical existance
- logical abstraction ? --> a logical/design-level representation that shows
 what something should contain or do, without creating the actual thing.

how to create class 
-----------------------
class <classname>{
    private:
      data members[private components] / function [private process]
    Public:
      data members[public components] / function [public process]
    protected:
      data members / function 
}
Private:
members which declare in this section of class are totally hidden 
and can not access by any external function(other object function) even main()
only public/private function of same class can access thewe members.

Public:
members which declare in this section of class can access by any external function
even main with "help of object name"

*/