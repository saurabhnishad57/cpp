// #include<iostream>
// using namespace std;
// int main(){
//     int size=5;
//     int marks[size];
//     for(int i=0;i<size;i++){
//         cin>>marks[i];
//     }
//     // cout<<marks[3]<<endl;
//     // cout<<marks[1]<<endl;
//     // cout<<price[2]<<endl;
//     // cout<<price[0]<<endl;
//     // int size=sizeof(marks)/sizeof(int);
//     // int size=5;

//     // loops : 0 to size-1
//     for(int i=0;i<size;i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }

// find smallest/largest in array
// #include<iostream>
// using namespace std;
// int main(){
//     int nums[]={5,6,7,200,-25,24};
//     int size=6;
//     int smallIndex=0,largeIndex=0;
//     int smallest=INT_FAST8_MAX;
//     int largest=INT_FAST8_MIN;
//     for(int i=0;i<size;i++){
//         if(nums[i]<smallest){
//             smallest=nums[i];
//             smallIndex=i;
//         }
//            if(nums[i]>largest){
//             largest=nums[i];
//             largeIndex=i;
//         }
        
//     }
//     cout<<smallest<<endl;
//     cout<<smallIndex<<endl;
//     cout<<largest<<endl;
//     cout<<largeIndex;
// }

// PASS BY REFERENCE(address)

// #include<iostream>
// using namespace std;
// void changeArr(int arr[],int size){
//     cout<<"In function\n";
//     for(int i=0;i<size;i++){
//         arr[i]=2*arr[i];
//     }
    // cout<<arr[i]<<" ";
// }
// int main(){
//     int arr[]={1,2,3,4};
//     int size=4;
//     changeArr(arr,size);
//     cout<<"In main\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// LINEAR SEARCH
// #include<iostream>
// using namespace std;
// int linearSearch(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             return i;//found
//         }
//     }
//     return -1;//not found
// }

// time complexity of linear search=O(n);
// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int target=50;
//     int size=7;
//     cout<<linearSearch(arr,size,target);
//     return 0;
// }

// Reverse an array
// using two pointer approach(swap)
// start=0,end=n-1;
// O(n) time complexity

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}