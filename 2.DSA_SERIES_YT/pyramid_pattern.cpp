//    1
//    121
//   12321
//  1234321
// 123454321
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         // spaces : n-i-1
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         // num1: i+1;
//         for(int k=1;k<=i+1;k++){
//             cout<<k;
//         }
//         // num2;
//         for(int l=i;l>0;l--){
//             cout<<l;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    // outerloop
    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // num1
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        // num2
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}