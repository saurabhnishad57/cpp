#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int * ptr=&a;
    float b=100.25f;
    float* price=&b;
    // cout<<ptr<<endl;
    // cout<<&b<<endl;
    int** parPtr=&ptr;
    cout<<&ptr<<endl;
    cout<<parPtr<<endl;
    cout<<*(&a)<<endl;
    cout<<*ptr<<endl;
    return 0;
}