#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int gcdrec(int a,int b){ //rec aproach
    if(b==0) return a;
    return gcdrec(b,a%b);
}
int lcm(int a,int b){
    int gcd=gcdrec(a,b);
    return (a*b)/gcd;
}

int main(){
cout<<lcm(20,28)<<endl;
}
