#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;
int main(){
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5); 


  cout<<s.size()<<endl;
//   cout<<"lower bound: "<<*(s.lower_bound(4))<<endl;  
  for(auto val: s){
    cout<<val<<" ";
  }
  cout<<endl;
    return 0;
}

// similar to map
// s.lower_bound (4) = min itni value milegi toh dega warni issse just greater ele m=dega