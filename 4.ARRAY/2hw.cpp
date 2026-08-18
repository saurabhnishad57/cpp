// wap to calculate sum and product of all numbers in an array

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size=8;
//     int sum=0,prod=1;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//         prod*=arr[i];
//     }
//     cout<<"Sum: "<<sum<<endl;
//     cout<<"Product: "<<prod<<endl;
//     return 0;

// }

// wap to swap max and min number of an array

// #include<iostream>
// #include<algorithm>
// #include<climits>

// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int size=9;
//     int maxIndex=INT_MIN,minIndex=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxIndex){
//             maxIndex=i;
//         }
//         if(arr[i]<minIndex){
//             minIndex=i;
//         }
//     }
//     swap(arr[maxIndex],arr[minIndex]);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Wap to print all the unique values in an array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,1,2,3,4,5,3,0,10};
//     int size=11;
    
//     for(int i=0;i<size;i++){
//         bool isUnique=true;
//         for(int j=0;j<size;j++){
//             if(i!=j){
//                 if(arr[i]==arr[j]){
//                     isUnique=false;
//                     break;
//                 }else{
//                     isUnique=true;
//                 }
//             }
//         }
//         if(isUnique){
//             cout<<arr[i]<<" ";
//         }
//     }
    
//     return 0;
// }

// wap to  print the intersection of two arrays

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int brr[]={3,4,5,6,7};
    int size=5;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}

