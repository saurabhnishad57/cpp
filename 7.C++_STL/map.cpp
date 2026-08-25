#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
   map<string,int> m;
   m["tv"]=100;
   m["laptop"]=50;
   m["mobile"]=11;
   m["tablet"]=50;
   m.insert({"camera",25});
   m.emplace("surabh",22);
    m.erase("tv");
   for(auto val: m){
    cout<<val.first<<" "<<val.second<<endl;
   }
//    cout<<"count: "<<m["laptop"].count()<<endl;
   if(m.find("laptop")!=m.end()){
    cout<<"found";
   }else{
    cout<<"not found";
   }
// imp
   unordered_map<string,int> x;

    return 0;
}

// key value pairs
// map sort the data in ascending order
// m[key]=value  for insert ya change
// insert/emplace , count,erase, find, size/empty/erase
// multimap = we can store multiple keys and can't use []
// multimap<string,int> m;
// tc  of unordered_map=O(loogn)
// Unordered map =store data in random order
// tc=O(1);