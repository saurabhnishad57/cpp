#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1={1,2,3,4,5};
    vector<int> vec2={5,4,3,3,1};
    // vec1.erase(vec1.begin()); //idx=0
    // vec1.erase(vec1.begin()+2); //idx=2
    vec1.erase(vec1.begin()+1,vec1.begin()+3);
    // vec1.insert(pos,val);
    vec1.insert(vec1.begin()+2,100);
    // vec1.clear();
    // vector<int> vec(10,0); //dynamic programming-tabulation dp[]
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    //  vec.push_back(4);
    //   vec.push_back(5);
    vec1.pop_back();
    vec1.clear();
    for(int val: vec1){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"vec.end: "<<*(vec2.end())<<endl;
    cout<<vec1.size()<<endl;
    cout<<vec1.capacity()<<endl;
    cout<<"front: "<<vec1.front()<<endl;
    cout<<"back: "<<vec2.back()<<endl;
}