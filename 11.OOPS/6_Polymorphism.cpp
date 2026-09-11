#include<iostream>
#include<string>
using namespace std;

// class Student{
// public:
//     string name;
//     Student(){
//         cout<<"non-parameterized constructor\n";
//     }
//     Student(string name){
//         this->name=name;
//         cout<<"parameterized constructor\n";
//     }
// };

//function overloading
// class Print{
// public:
//     void show(int x){
//         cout<<"int : "<<x<<endl;
//     }
//     void show(char ch){
//         cout<<"Char : "<<ch<<endl;
//     }
// };

// function overriding
class Parent{
public:
    void getInfo(){
        cout<<"parent class\n";
    }
    virtual void hello(){
        cout<<"hello from Parent\n";
    }
};
class Child : public Parent{
public:
    void getInfo(){
        cout<<"child class\n";
    }
    virtual void hello(){
        cout<<"hello from Child\n";
    }
};
int main(){
    // Student s1();
    // Print p1;
    // p1.show(101);
    // p1.show('%');

    Parent c1;
    c1.hello();
    return 0;
}