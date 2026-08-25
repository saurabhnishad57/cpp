#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string isPrime(int n){

    for(n=2;n<=n;n++){
        // string Prime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) {
            return "Non-Prime";
        }
    }
}
    return "Prime";
}
int main(){
  int n;
  cin>>n;
  cout<<isPrime(n)<<endl;
  return 0;

}
