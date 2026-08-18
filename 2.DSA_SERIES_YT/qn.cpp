// // check if a number is prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     bool isPrime=true;
//     for(int i=2;i*i<=n;i++){ 
//         // check from 2 to root(n)[i*i<=n] or i=n-1;
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){
//         cout<<"Prime";
//     }else{
//         cout<<"Non Prime";
//     }
    
//     return 0;
// }

// nested loops

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         int m=10;
//         for(int j=1;j<=m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Homework
// sum of all numbers from 1 to n which are divisible by 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10,sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             sum+=i;
//         }
//     }
//     cout<<sum;
// }

// Print factorial of number n;

#include<iostream>
using namespace std;
int main(){
    int n=5;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
}