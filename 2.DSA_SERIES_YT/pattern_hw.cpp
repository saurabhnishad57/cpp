// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
// KHUD KRKE MAJA AA GYA KEEP IT UP


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n  : ";
    cin>>n;
    // Outer loop
    for(int i=0;i<n;i++){
        // left stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //  spaces
        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";
        }
        
        // right  stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // bottom loop
    for(int i=0;i<n;i++){
        // left star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        // right star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}