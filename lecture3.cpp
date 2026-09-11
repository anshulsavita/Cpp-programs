// istream
// --------
// use to prepare an object which performs read operations
// its predifine object name is cin (console input).
// console input -->[keyboard]
// syntax --> cin >> <var> >> <var>.....

// int x;
// cin         >>          x;
// kb      exsertion       variable
//          operator

#include<iostream>
using namespace std; // read iostream from standard folder
// int main(){
    // int x,y;
    // cout<<"Enter x:";
    // cin>>x;
    // cout<<"Enter Y:";
    // cin>>y;
    // int z=x+y;
    // cout<<"Sum is:"<<z<<endl; // endl --> it is a manipulator
    // cout<<x<<"+"<<y<<"="<<z<<endl;

// -------------------------------------------

    // int x,y;
    // cout<<"Enter X & Y:";
    // cin>>x>>y;
    // int z=x+y;
    // cout<<"Sum is:"<<z<<endl;
    // cout<<x<<"+"<<y<<"="<<z<<endl;

    // float r,t,a,si;
    // cout<<"Enter Rate:";
    // cin>>r;
    // cout<<"Enter Time:";
    // cin>>t;
    // cout<<"Enter Amount:";
    // cin>>a;
    // si=r*t*a/100;
    // cout<<"Simple interest is:"<<si<<endl;

//     return 0;
// } 

// function --> 
float calculateInterset(float p,float r,float t){
    float ia=p*r*t/100;
    return(ia);
}
int main(){

    float r,t,a,si;
    cout<<"Enter Amount,Rate,Time:";
    cin>>a>>r>>t;
    si=calculateInterset(a,r,t);
    cout<<"Interest Amount is:"<<si<<endl;
    si=calculateInterset(93820,2,10);
    cout<<"Interest Amount is:"<<si<<endl;

    for(a=1000;a<=10000;a=a+1000){
        si=calculateInterset(a,2,1);
        cout<<"Interest Amount is:"<<si<<endl;
    }
    return 0;
} 