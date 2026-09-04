// 1 2 3
// 1 2 
// 1 3
// 1 
// 2 3
// 2
// 3
//    NULL

#include<iostream>
#include<bits/stdc++.h>
// #include<6.Sorting>
using namespace std;
void printSubset(vector<int> &arr,vector<int> &ans,int i){
    if(i==arr.size()){
        for(int val: ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return ;
    }
    //INCLUDE
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1);
    // BACK_TRACK
    ans.pop_back();
    // EXCLUDE
    printSubset(arr,ans,i+1);
}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ans;
    printSubset(arr,ans,0);
    return 0;
}