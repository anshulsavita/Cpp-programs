//          ***************High LeveL Language*************
//      (procedure oriented)                   (Object oriented)
// C,COBOL,BASIC PASCAL, FORTRAN        C++,Python,Java,Perl,Ruby,ada

// Object oriented programing -->
// Object --> 
    // What is object?
    // - Objects are realworld entities (everything in our surrounding).
    // Each object consist of
        // - components
        // - process[functions]
    
    // How one can create an object?
        // - Behaviour
        // - State (technology)[process/logics]
        // - Identity (name)
        
// -----------------------------XXXX--------------------------------
// -- iostream --> header file
// istream              ostream
//         iostream [class]

// ostream class 
// -------------
// output stream 
// - use to prepare an object which perform basic output operations.
// its predefine name is cout

// ------------
// cout [console output]
// -----
// use to print variables value as well as message.
//syntax --> cout<<"Message"/varname<<"Message"/varname....
// << --> insert

// c++ is a bottom to top uproach

#include <iostream>
using namespace std;
int main()
{
    // cout<<"Hello students";

    int x=10,y=20,z;
    z=x+y;
    cout<<"Total is:"<<z;
    cout<<"sum of"<<x<<" and "<<y<<" is "<<z;
    return 0;

}