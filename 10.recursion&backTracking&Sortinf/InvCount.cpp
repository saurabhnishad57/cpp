#include<iostream>
#include<vector>
using namespace std;
int  merge(vector<int> &arr,int st, int mid, int end){
    vector<int> temp;
    int i=st,j=mid+1;
    int invCount=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
            invCount+=(mid-i+1);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
    return invCount;
}
int  mergeSortINVcount(vector<int> &arr,int st,int end){
    
    if(st<end){
        int mid=st+(end-st)/2;
        int left=mergeSortINVcount(arr,st,mid);  //left count
        int right=mergeSortINVcount(arr,mid+1,end); //right count
        int invCount=merge(arr,st,mid,end);  //inv Count
        return left+right+invCount;
    }
    return 0;
}
int main(){
    vector<int> arr ={6,3,5,2,7};
    cout<<"INV COUNT: "<<mergeSortINVcount(arr,0,arr.size()-1);
    return 0;
}