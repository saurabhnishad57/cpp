#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr={2,3,6,5,1,0,4};

    int k;
    cin>>k;
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k-1]<<endl;
    return 0;
}

//6 5 4 3 2 1 0
