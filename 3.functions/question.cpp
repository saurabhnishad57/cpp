// #include<iostream>
// using namespace std;
// // sum of 2 numbers
// int sum(int a, int b){
//     int s=a+b;
//     return s;
// }
// // min of 2 num
// int min(int a, int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//     cout<<sum(10,5)<<endl;
//     cout<<min(1,2);
// }

// calc sum of num from 1 to n;
// #include<iostream>
// using namespace std;
// int sumN(int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     cout<<sumN(5)<<endl;
//     cout<<sumN(10)<<endl;
// }

// calculate n factorial
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int facto=1;
//     for(int i=1;i<=n;i++){
//         facto*=i;
//     }
//     return facto;
// }
// int main(){
//     cout<<fact(5)<<endl;
//     cout<<fact(4)<<endl;
// }

// function in memory
// 1. stack->static
// 2. heap->dynamic

// pass by value->when we pass value through function
// ->copy of argument is passed to function
// #include<iostream>
// using namespace std;
// void changeX(int x){
//     x=2*x;
//     cout<<"x = "<<x<<endl;
// }
// int main(){
//     int x=5;
//     changeX(x);
//     cout<<"x = "<<x;
// }

// sum of digits of a numbers
// #include<iostream>
// using namespace std;
// int sumOfDigits(int n){
//     int sum=0;
//     while(n!=0){
//         sum+=n%10;
//         n=n/10;

//     }
//     return sum;
// }
// int main(){
//     int n=145;
//     cout<<"SUM OF DIGITS = "<<sumOfDigits(n)<<endl;
// }

// calc nCr binomial coefficient for n & r
#include<iostream>
using namespace std;
 int fact(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto*=i;
    }
    return facto;
}
int bc(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n=5,r=2;
    cout<<"bc of n&r = "<<bc(n,r)<<endl;
}