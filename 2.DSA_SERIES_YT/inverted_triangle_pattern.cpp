// 1 1 1 1 
// 2 2 2   //i+j=n;
// 3 3 
// 4 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<num<<" ";
//         }
//         num++;
//         cout<<endl;
//     }
// }


// 1111
//  222
//   33
//    4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int num=1;
//     for(int i=0;i<n;i++){
//         // spaces
//         for(int k=0;k<i;k++){
//             cout<<" ";
//         }
//         // numbers
//         for(int j=0;j<n-i;j++){
//             cout<<num;
//         }
//         num++;
//         cout<<endl;
//     }
// }


// AAAA
//  BBB
//   CC
//    D
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        // spaces
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        // numbers
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}