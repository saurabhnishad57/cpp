#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int st,int end){
   int idx=st-1;
   int pivot=arr[end];
   for(int j=st;j<end;j++){
        // if(arr[j]<=pivot){ //ascending  order sorted
        if(arr[j]>=pivot){   //descending order  
            idx++;
            swap(arr[idx],arr[j]);
        }
   }
   idx++;
   swap(arr[idx],arr[end]);
   return idx;
}
void QuickSort(vector<int> &arr,int st,int end){
    //tc=>O(nlogn) :avg/practical
    //worst case : O(n^2)
    // sc=O(1)
    if(st<end){
        int pivIdx=partition(arr,st,end);
        QuickSort(arr,st,pivIdx-1); //left
        QuickSort(arr,pivIdx+1,end); //right
    }
}
int main(){
    vector<int> arr={5,2,6,4,1,3};

    QuickSort(arr,0,arr.size()-1);

    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}