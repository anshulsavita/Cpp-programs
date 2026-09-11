/*
Function -->
------------
    -use to devide a large program in a small module
    - one can call functions any time any where in a program multiple times thus it provides reusability of code 

Syntax --> 
<type> <function name>(arguments){
         ==========
         ==========
         return (value)
}

- if return type is void then no value will be return by function
     Ex -->
table(5);
k=sum(3,4,10)
- if argument type is void then no value/parameter transfer by function
ex -->
address()
*/
#include<iostream>
using namespace std;
// int sum(int a,int b,int c){ //called function(formal arguments)
//     int t=a+b+c;
//     return(t);
// }
// int main(){
//     int k;
//     k=sum(4,5,6); //calling function(actual arguments)
//     cout<<k<<endl;

//     k=sum(300,44,55);
//     cout<<k<<endl;
// }

// void table(int n){
//     int i=1,t;
//     while(i<=10){
//         t=n*i;
//         cout<<n<<"x"<<i<<"="<<t<<endl;
//         i++;
//     }
// }
// int main(){
//     table(40);
//     table(22);
// }

// find maximum between 2 numbers
// int max(int a,int b){
//     if(a>b){
//         return (a);
//     }
//     else{
//         return(b);
//     }
// }
// int main(){
//    int k=max(2,8);
//    cout<<"maximum is:"<<k<<endl;
// }

// program to find out sum of first n numbers
// int sum(int n){
//     int i,s=0;
//     for (i=1;i<=n;i++){
//         s=s+i;
//     }
//     return (s);
// }
// int main(){
//     int k=sum(100);
//     cout<<"Sum of first 100 numbers:"<<k<<endl;
// }

// print a character n times
// void print(char a,int n){
//     int i;
//     for(i=1;i<=n;i++){
//         cout<<a;
//     }
// }
// int main(){
//     print('#',20);
// }

// print factorial of any number
// int factorial(int n){
//     int p=1;
//     for (int i=n;i>=1;i--){
//         p=p*i;
//     }
//     return (p);
// }
// int main(){
//     int k=factorial(4);
//     cout<<k;
// }

// print reverse of any number
// int reverse(int n){
//     int r,t=0,p=1000;
//     while(n>0){
//         r=n%10;
//         t=t+(r*p);
//         p=p/10;
//         n=n/10;
//     }
//     return (t);
// }
// int main(){
//     int k=reverse(3972);
//     cout<<k;
// }

// print a number is prime or not
int isprime(int n){
    int c=0;
    for (int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        return (1);
    }
    else{
        return (0);
    }
}
int main(){
    int k=isprime(7);
    cout<<k;
}