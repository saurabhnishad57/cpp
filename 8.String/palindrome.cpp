#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int st=0,end=str.size()-1;
    while(st<end){
        if(str[st]!=str[end]){
            cout<<"No! it is not a palindrome"<<endl;
            return 0;
        }
        st++;
        end--;
    }
    cout<<"Yes it is a palindrome\n";
}
int main(){
    string str="SOS";
    isPalindrome(str);
    return 0;
}
