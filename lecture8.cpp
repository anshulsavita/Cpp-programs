#include<iostream>
using namespace std;
/*
ostream
-----------
    is a class
    object name cout

syntax --> cout<<"message"/varname;
Example
cout<<"Hello";

int a=100;
cout<<"Value is:"<<a<<endl;

endl --> new line [manipulator]

istream
-------------
     - is a class which is use to create input stream object
     & its predefine object name is cin [console input]
     
 cin 
     - represent keyboard
     - use to input thru keyboard at the time of program execution

syntax --> cin>><varname>;
Example
int a;
cin>>a;

cin          >>          a
keybord  exsersion      variable
*/

// int main(){
//     int r,q,a;
//     cout<<"Enter Rate:";
//     cin>>r;
//     cout<<"Enter Quantity:";
//     cin>>q;
//     a=r*q;
//     cout<<"Amount:"<<a<<endl;
// }

/*
functions -->
---------------
 - divide a large program in a small module
     [procedure/process]

suppose function in c ->
int on()
{}
int off()
{}
is possible but problem is that in real world there is Zero independent process so these functions are unnecessary.
so for real world process we use c++

Syntax --> 
<return type> <function name> <arguments>{
    ==========
    ==========
    ==========
    return <value>
}
function name must be meaningfull (real world)
*/
// example from c -->
int add(int x,int y){ //called function [formal arguments]
    int c=x+y;
    return (c);
}
int max(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int sum(int n){
    int c=0;
    for(int i=0;i<=n;i++){
        c=c+i;
    }
    return c;
}
int main(){
    int k=add(10,20); // calling function [actual arguments]
    cout<<k<<endl;
    k=add(100,3000); //re-usability
    cout<<k<<endl;
    int j=max(20,10);
    cout<<j<<endl;
    j=sum(100);
    cout<<j<<endl;
}