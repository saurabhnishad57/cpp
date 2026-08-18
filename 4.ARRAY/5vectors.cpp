// array like hote hai vectors
// vectors-dynamic in nature(no fixed memory/size)
// vector SYntax
// vector<int>vec;
// vector<int>vec={1,2,3}
// vector<int>vec(3,0)[3->size,0->index];

// #include<iostream>
// #include<vector>  //using STL
// using namespace std;
// int main(){
    // vector<int>vec={1,2,3};
    // cout<<vec[0];
//     vector<char>vec={'a','b','c'};
//     cout<<"size= "<<vec.size()<<endl;
//     vec.push_back('s');
//     cout<<"after push back size = "<<vec.size()<<endl;

//     vec.pop_back();
//     cout<<"after pop back size = "<<vec.size()<<endl;
//     cout<<vec.front()<<endl;
//     cout<<vec.back()<<endl;
//     cout<<vec.at(1);
    // for(char i : vec){
    //     cout<< i << endl;
    // }
//     return 0;
// }

// VECTOR FUNCTIONS
// size
// push_back
// pop_back
// front
// back
// at


// STATIC V/S DYNAMIC ALLOCATION
// static=compiletime(arrays are fixed in size)
// dyanamic=runtime (vectors can resize)
// Static allocation  stack K andar Save hota Hai
//  dynamic allocation  heap K andar Save hota Hai

// NOTE-> Internally vectors are nothing but a array 
    // When we push back a value inside a vector it creates a double size array like
    //  if we have one size of array and have placed 0 value and 
    // we have to place like value 1 then we have then the vector creates internally double size array .
    //  this whole behave like a magic but this is internally done  in C++
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}

// SINGLE NUMBER
// arr[]={4,1,2,1,2} ans=4
// using bitwise operator
// leetcode-136

// hw
// 1->linear search using vectors
// 2->reverse 
// easy level array problems

