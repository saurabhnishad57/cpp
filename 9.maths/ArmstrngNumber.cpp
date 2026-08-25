// sum of cubes of its digit is equal to that number

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int copyN=n;
    int sumOfCubes=0;
    while(n!=0){
        int dig=n%10;
        sumOfCubes+=(dig*dig*dig);
        n=n/10;
    }
    return sumOfCubes=copyN;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  if(isArmstrong(n)){
    cout<<"is an armstrong number\n";
  }else{
    cout<<"NOT an armstrong number\n";
  }
  return 0;

}
