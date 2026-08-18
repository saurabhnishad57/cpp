// majority elements 
// {1,2,3,1,1}
// using brute force approach  = O(n^2)
#include<iostream>
#include<vector>
using namespace std;
int  majorityElements(vector<int> nums){
    int freq;
    for(int val: nums){
        freq=0;
        for(int ele: nums){
            if(ele==val){
                freq++;
            }
        }
        if(freq>nums.size()/2){
            return val;
        }
    }
    // return -1;
}
int main(){
    vector<int> vec={2,2,1,1,1};
    cout<<majorityElements(vec);
}

// m2 optimised= O(nlogn)
// int majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         // sort
//         sort(nums.begin(),nums.end());
//         // fre count
//         int freq=1,ans=nums[0];
//         for(int i=1;i<n;i++){
//             if(nums[i]==nums[i-1]){
//                 freq++;
//             }else{
//                 freq=1;
//                 ans=nums[i];
//             }
//             if(freq>n/1){
//                 return ans;
//             }
//         }
//         return ans;
//     }

// m3 morore's voting algorithm
// leetcode 169
