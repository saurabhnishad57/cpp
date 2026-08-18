// // LINEAR SEARCH USING VECTORS

// #include<iostream>
// #include<vector>
// using namespace std;
// int linearSearch(vector<int>vec,int target){
//     for(int i=0;i<vec.size();i++){
//         if(vec[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>vec={1,2,3,4,5};
//     // int size=5;
//     int target=5;
//     cout<<linearSearch(vec,target);
// }

// REVERSE CODE USING VECTORS

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i]<<" ";
    }
}