
//boilerplate code - comment

// #include<iostream>
// using namespace std;
// int main(){
    
//     return 0;
// }

// first program

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Saurabh"<<endl;
//     cout<<"Nishad"<<endl;
//     cout<<"Saurabh\nNishad";
//     return 0;
// }

// variables
// age=25  int=4 bytes and float=4byte and double=8bytes
// grade='A'  char=1 byte and bool=1 byte
// x="abcd"

#include<iostream>
using namespace std;
int main(){
    int age=25;
    char grade='A';
    float pi=3.14f;
    cout<<sizeof(age)<<endl;
    cout<<int(grade)<<endl;
    cout<<pi<<endl;
    bool isSafe=false;
    cout<<isSafe<<endl; 
    // true->1 & false->0
    double price=100.99;
    cout<<price<<endl;

    // Type conversion(implicit) 
    char meow='b';
    int value=meow;
    cout<<value<<endl;
    // Type casting(explicit)
    double prince=1000.99;
    int newPrice=int(prince);
    cout<<newPrice<<endl;


    return 0;
}
