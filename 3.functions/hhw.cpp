// WAF to check if a number is prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     bool isPrime=true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             isPrime=false;
//         }
//     }
//     if(isPrime==true){
//         cout<<"prime";
//     }else{
//         cout<<"Non-Prime";
//     }
// }

// WF to print nth fibonacci
// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }else{
//         return fibonacci(n-1)+fibonacci(n-2);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<fibonacci(n);
// }

// WAP to print all prime number from 2 to N;
#include<iostream>
using namespace std;
void prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    prime(n);
}