#include<iostream>
#include<vector>
using namespace std;
// void changeA(int* ptr){ //pass by reference using pointer
//     *ptr=20;
// }
void changeA(int &b){//pass by ref using alias
    b=20;
}
int main(){
    int a=10;
    changeA(a);
    cout<<"inside main fn: "<<a<<endl;
    return 0;
}