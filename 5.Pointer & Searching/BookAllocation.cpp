//Book Allocation 
// ||Painter's Partion Problem (st=max(arr ))
#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>& arr,int n, int m, int maxAllowedPages){ //O(N)
    int stu=1,pages=0; 
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPages) return false;
        if(pages+arr[i]<=maxAllowedPages){
            pages+=arr[i];
        }else{
            stu++;
            pages=arr[i];
        }
    }
    return stu<=m;
}
int allocateBooks(vector<int>&arr,int n,int m){ //O(logN+N)
    if(m>n) {
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){ //O(N)
        sum+=arr[i];
    }
    int st=0,end=sum; //range of possible ans
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){ //left
            ans=mid;
            end=mid-1;
        }else {
            st=mid+1; //right
    }
}
    return ans;
}
int main(){
    vector<int> arr={1,2,8,4,9};
    int n=5,m=3;
    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}