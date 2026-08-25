#include<iostream>
#include<vector>
using namespace std;
int main(){
   pair<int,int> p ={1,5};
   pair<string,int> s={"Saurabh",292};
   cout<<p.first<<endl;
   cout<<p.second<<endl;
    cout<<s.first<<endl;
   cout<<s.second<<endl;
   pair<int,pair<char,int>> x={1,{'a',3}};
   cout<<x.first<<endl;
   cout<<x.second.first<<endl;
   cout<<x.second.second<<endl;

    vector<pair<int,int>> vec={{1,2},{2,3},{3,4}};
    vec.push_back({4,5});
    vec.emplace_back(4,5);//in-place objects create
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}