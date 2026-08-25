#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;
int main(){
  multiset<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5); 

   s.insert(3);
  s.insert(4);
  s.insert(5); 


  cout<<s.size()<<endl;
  cout<<"lower bound: "<<*(s.lower_bound(4))<<endl;  
    cout<<"Upper bound: "<<*(s.upper_bound(4))<<endl;  

  // for(auto val: s){
  //   cout<<val<<" ";
  // }
  cout<<endl;
    return 0;
}

// similar to map
// s.lower_bound (4) = min itni value milegi toh dega warni issse just greater ele m=dega ex s.end()
// lower bound('b)= should not be less than key
// upper bound('b)=value should be greater than key

// multi set  multiset<int> s;
// unordered set  unordered_set<int> s;

