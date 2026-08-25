#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="Saurabh Nishad"; //dynamic=> runtime resize
    // cout<<str<<endl;
    // str="hello";
    // cout<<str<<endl;

    char chArr[]="apna college"; //dont change at runtime
    // chArr="hello";

    // string str1="meow";
    // string str2="ladle";
    // string str3=str1+str2; //concatenation
    // cout<<str3<<endl;
    // cout<<(str1==str2)<<endl; //return 1 for true & 0  for false
    // cout<<(str1<str2)<<endl; //dictionary wise letter
    // cout<<str1.length()<<endl;


    // string str;
    // getline(cin,str);
    // cout<<"Output: "<<str<<endl;

    string str="saurabh nishad.";
    for(char ch:str){
        cout<<ch<<" ";
    }
    cout<<endl;
}