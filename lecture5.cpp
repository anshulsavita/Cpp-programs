#include<iostream>
using namespace std;
// refrence variable (&) ---> use to assign alias to variables name or object
// Alias(subname) -->  i have a variable x whose value is 50 so i gave that variable a second name y it is a alias(subname).
// Syntax -->
//     <type> &<alias variable>=<original variable>
// ex =>
// int main(){
//     int x=90;
//     int &t=x;
//     cout<<x<<endl; // 90
//     cout<<t<<endl; //90
//     t=t+100;
//     cout<<x<<endl; //190
//     x=x+10;
//     cout<<t<<endl; //200
//     cout<<x<<endl; //200
// }
// -------------------------------------------
// call by value --> in this technique actual argument copied their values in formal arguments
// and whatever changes will make in formal arguments will not affect the values of actual arguments
// void swap(int a,int b){
//     int t=a;
//     a=b;
//     b=t;
// }
// int main(){
//     int x=10,y=20;
//     cout<<x<<","<<y<<endl; //10,20
//     swap(x,y);
//     cout<<x<<","<<y<<endl; //10,20
// }
// --------------------------------------------
// call by reference --> in this technique formal argument are alias of actual arguments
// and whatever changes will make in formal arguments will affect the values of actual arguments
// NOTE: alias variable have no memory location of its own
// void swap(int &a,int &b){
//     int t=a;
//     a=b;
//     b=t;
// }
// int main(){
//     int x=10,y=20;
//     cout<<x<<","<<y<<endl; //10,20
//     swap(x,y);
//     cout<<x<<","<<y<<endl; //20,10
// }
// ---------------------------------------------
// void call(int a,int &b){
//     a=a+10;
//     b=b+100;
// }
// int main(){
//     int x=10,y=20;
//     cout<<x<<","<<y<<endl; //10,20
//     call(x,y);
//     cout<<x<<","<<y<<endl; //10,120
//     call(y,x);
//     cout<<x<<","<<y<<endl; //110,120

// }
// -----------------------------------------
// OOPS --> Object Oriented Programming