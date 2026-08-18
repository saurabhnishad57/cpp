
// array=n then subarray=n*(n+1)/2
// maximum possible subarray
// 1 12 123 1234 12345 
// 2 23 234 2345 
// 3 34 345 
// 4 45 
// 5 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             for(int i=start;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// max subarray sum using brute better approach = O(n^2)
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//    int arr[]={3,-4,5,4,-1,7,-8};
//    int n=7;
//    int maxSum=INT_MIN;
//    for(int st=0;st<n;st++){
//        int currSum=0;
//        for(int end=st;end<n;end++){
//            currSum +=arr[end];
//             maxSum=max(currSum,maxSum);
//        }
       
// }
//    cout<<"max subarray sum= "<<maxSum;
// }

// max subarray sum using kadanes algorithm= O(n)
// most optimised
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int currSum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"max Subarray sum= "<<maxSum;
}