// *
// * * 
// * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1
// 2 2
// 3 3 3 
// 4 4 4 4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int num=1;
//     for(int i=0;i<n;i++){
        
//         for(int j=0;j<i+1;j++){
//             cout<<num<<" ";
//         }
//         num++;
//         cout<<endl;
//     }
// }

// Floyd's triangle Pattern
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int num=1;
//     for(int i=0;i<n;i++){
        
//         for(int j=0;j<i+1;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }


// A 
// B C 
// D E F 
// G H I J 
// K L M N O 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// A 
// B B 
// C C C 
// D D D D 
// 👇

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++){
        
//         for(int j=0;j<i+1;j++){
//             cout<<ch<<" ";
           
//         }
//         ch++;
//         cout<<endl;
//     }
// }

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int num=1;
        
//         for(int j=0;j<i+1;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         // int num=1;
        
//         for(int j=i+1;j>0;j--){
//             cout<<j<<" ";
//             // num++;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            
        }
    }
}