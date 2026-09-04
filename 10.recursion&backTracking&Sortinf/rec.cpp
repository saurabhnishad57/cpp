#include<iostream>
#include<bits/stdc++.h>
// #include<6.Sorting>
using namespace std;
void printNum(int n){  //recursive fn
    if(n==1){
        cout<<"1\n";
        return;
    }
        cout<<n<<" ";
        printNum(n-1);
}
int factorial(int n){   //O(n)
    if(n==0) return 1;
    return n*factorial(n-1);
}
int sumN(int n){
    if(n==1) return 1;
    return n+sumN(n-1);

}
int fibonacci(int n){
    if(n==1 || n==0) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
bool isSorted(vector<int> arr,int n){
    if(n==0 || n==1){
        return true;  //0
    }
    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1); //0
}
int binarySearch(vector<int> arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar) return mid;
        else if(arr[mid]<tar) binarySearch(arr,tar,mid+1,end);
        else binarySearch(arr,tar,st,mid-1);
    }
    return -1;

}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    printNum(n);
    cout<<factorial(n)<<endl;
    cout<<sumN(n)<<endl;
    cout<<fibonacci(n)<<endl;
    vector<int> arr={-1,0,3,5,9,12};
    cout<<isSorted(arr,n)<<endl;
    int tar=9;
    int st=0,end=n-1;
    cout<<binarySearch(arr,tar,st,end);
    return 0;
}