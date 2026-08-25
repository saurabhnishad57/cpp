#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
    deque<int> d={1,2,3,4,5};
    for(int val: d){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<d[3]<<endl;
    return 0;
}

// deque is implemented as a double ended queue
    // very similar to list
     // push_back & push_front
    // emplace_back & emplace_front;
    // pop_back &pop_front
    // random access is possible in deque nut not in list
    