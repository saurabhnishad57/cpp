#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;
int main(){
//   int arr[6]={3,5,3,1,0,2};
//   sort(arr,arr+6);

// vector<int> vec={3,5,3,1,0,2};
vector<pair<int,int>> vec={{2,3},{1,6},{4,5}};
sort(vec.begin(),vec.end(),greater<int>());
//   for(int val:vec){
//     cout<<val<<" ";
//   }
for(auto p:vec){
    cout<<p.first<<" "<<p.second<<endl;
}
  cout<<endl;
  return 0;

}


// sort(arr,arr+n)  start,end
// sort(arr,arr+n,greater<int>())  sort in descending order
// sort(vec.begin(),vec.end())

// reverse(vec.begin(),vec.end());
// next_permutation(vec.begin(),vec.end());
// prev_permutation(vec.begin(),vec.end());
// swap, min, max
// max(4,5)
// min(4,5)

// max_element(vec.begin(),vec.end());
// min_element(vec.begin(),vec.end());

// begin_search(vec.begin(),vec.end(),target);
