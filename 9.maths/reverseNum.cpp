#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void reverse(int n){
    int rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev<<endl;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  reverse(n);
}
