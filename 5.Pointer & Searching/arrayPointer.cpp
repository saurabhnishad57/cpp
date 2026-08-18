#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    // cout<<*arr<<endl; //pointer
    int a=15;
    // arr[1]=&a;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl; //+4
    ptr+=3; //3 int=12 bytes=+8
    cout<<ptr<<endl;

    cout<<*(arr+1)<<endl;

    int *ptr1;
    int *ptr2=ptr1+2;
    cout<<ptr2-ptr1<<endl;
    cout<<(ptr1<ptr2)<<endl;
    return 0;

}