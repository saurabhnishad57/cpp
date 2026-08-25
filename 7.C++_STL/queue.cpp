#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
   queue<int> q;
   q.push(1);
   q.push(2);
   q.push(3);

   queue<int> q2;
   while(!q.empty()){
    cout<<q.front()<<endl;
        q.pop();
   }
//    cout<<endl;
    return 0;
}

// non-sequential container
// queue  = FIFO
// push,emplace  , top,pop,size,empty,swap