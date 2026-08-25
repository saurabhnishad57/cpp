#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void printDigits(int n){ //O(log10n)
    int count=0,sum=0;
    while(n!=0){
        int digits=n%10;
        // cout<<digits<<endl;
        // count++;
        sum+=digits;
        n=n/10;
    }
    // cout<<count<<endl;
    cout<<sum<<endl;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  printDigits(n);
    cout<<(int)(log10((n)+1))<<endl;
  return 0;

}
