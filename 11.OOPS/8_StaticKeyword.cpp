#include<iostream>
#include<string>
using namespace std;
// class A{
//     public:
//     int x;
//     void incX(){
//         x=x+1;
//     }
// };
class ABC{
public:
    ABC(){
        cout<<"constructor\n";
    }
    ~ABC(){
        cout<<"destructor\n";
    }
};
int main(){
    // A obj1;
    // A obj2;
    // obj1.x=100;
    // obj2.x=200;
    // cout<<obj2.x<<endl;
    // obj2.incX();
    // cout<<obj2.x<<endl;

    if(true){
        static ABC obj;
    }
    cout<<"END OF MAIN FUNCTION\n";
    return 0;
}