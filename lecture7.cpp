#include<iostream>
using namespace std;
// OOPS (Object Oriented Programming System)
// - Objects are real world entities

// Objects
// --------
//      - Behaviour: Shape,Size,Weight
//      - State: Technology
//      - Association & aggregation
//      - identity

// C++ Programming
// -------------------

// iostream
// ---------------
// input output stream
// ostream(class)          istream(class)
//          |              |
//          iostream(class)
// - iostream class is used to perform various input & output operations

// ostream(class)
//  - use to perform various output operations
//  - its predefine object name is cout
// 
//  - cout: console output (screen or keyboard)
//         - represent screen/moniter
// syntax -->
//      cout<<"msg"/varname<<"msg"/varname.....
// << (insertion operator)
// Ex => cout<<"Hello World";
int main(){
    int a=900,b=1000,c;
    cout<<a<<endl;
    cout<<"Value:"<<a<<endl;
    c=a+b;
    cout<<a<<"+"<<b<<"="<<c<<endl;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<c<<endl;
    cout<<a+b;
}