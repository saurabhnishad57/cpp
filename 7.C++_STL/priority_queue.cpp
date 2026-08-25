#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
   priority_queue<int> q;
// priority_queue<int,vector<int,greater<int>> q;

   q.push(1);
   q.push(2);
   q.push(3);
    q.push(10);
   queue<int> q2;
   while(!q.empty()){
    cout<<q.top()<<endl;
        q.pop();
   }
//    cout<<endl;
    return 0;
}

// non-sequential container
// p queue sort the array 
// Priority_queue  = use maxHeap ya miHeap str (complete binary tree)
// push,emplace O(logn) , top O(1),pop,size,empty,swap