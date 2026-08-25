#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
// void gcd(int a,int b){ //brute force approach
//     int gcdx=1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0) gcdx=i;
//         if(a==0 ) gcdx= b;
//         if(b==0) gcdx= a;
//         if(a==b) gcdx= a;
//     }
//     cout<<gcdx<<endl;
// }
// int gcd(int a,int b){ //euclids 
//     while(a>0 && b>0){
//         if(a>b) a=a%b;
//         else b=b%a;
//     }
//     if(a==0) return b;
//     return a;
// }
int gcd(int a,int b){ //rec aproach
    return gcd(b,a%b);
}

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int m;
  cout<<"Enter m: ";
  cin>>m;
    cout<<gcd(n,m);
}
