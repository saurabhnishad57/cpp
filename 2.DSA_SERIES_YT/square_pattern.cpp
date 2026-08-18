// SQUARE PATTERN
// * * * *
// * * * *
// * * * *
// * * * *
// 🥱
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// SQUARE PATTERN abcd
// A B C D
// A B C D
// A B C D
// A B C D
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         char ch='A';
//         for(int j=0;j<n;j++){
//             cout<<ch<<" ";
//             ch=ch+1; //char+int=char

//         }
//         cout<<endl;
//     }
//     return 0;
// }

// new patterm
// 123
// 456
// 789
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int x=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<x<<" ";
//             x++;
//         }
//         cout<<endl;
//     }
//     cout<<"after pattern the x is : "<<x;
// }

// 👇
// A B C
// D E F
// G H I

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}