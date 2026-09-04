#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int st,int mid,int end){
    // O(n) =>tc
    vector<int> temp;
    int i=st,j=mid+1;
    while(i<=mid &&j<=end){
        if(arr[i]>=arr[j]){  //< - ascending sort
                            //> -descending sort
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
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
}
void mergeSort(vector<int> &arr,int st,int end){
    // tc=total rec call*wd in each call
    //tc=logn*n
    // tc=O(nlogn)
    if(st<end){
        int mid=st+(end-st)/2;
        mergeSort(arr,st,mid); //left
        mergeSort(arr,mid+1,end); //right
        merge(arr,st,mid,end);
    }
}
int main(){
    vector<int> arr={12,31,35,8,32,17};

    mergeSort(arr,0,arr.size()-1);

    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}