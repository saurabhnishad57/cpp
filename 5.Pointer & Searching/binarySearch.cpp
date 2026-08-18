#include<iostream>
#include<vector>
using namespace std;
// int binarySearch(vector<int> arr,int tar){ //Iterative sc=o(1) && tc=o(logn)
//     int st=0,end=arr.size()-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(tar<arr[mid]){
//             end=mid-1;
//         }else if(tar>arr[mid]){
//             st=mid+1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }
// recursive approach not better than iterative bcoz sc=o(logn) && tc=o(logn)
int binarySearch(vector<int> arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tar<arr[mid]){
            return binarySearch(arr,tar,st,mid-1);
        }else if(tar>arr[mid]){
            return binarySearch(arr,tar,mid+1,end);
        }else{
            return mid;
        }


return-1;    }
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};
    int tar1=12;
    int st1=0,end1=arr1.size()-1;
    // cout<< binarySearch(arr1,tar1,st1,end1)<<endl;
    vector<int> arr2={-1,0,3,4,5,12};
    int tar2=10;
    int st2=0,end2=arr2.size()-1;
    cout<< binarySearch(arr2,tar2,st2,end2)<<endl;
    return 0;
}