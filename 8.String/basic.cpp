// strings are basicallly a character array = C string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char str[]={'a','b','c','d','\0'};
    //  char str[]="Hello"; //string literals
    // cout<<str[1]<<endl; //constant pointers
    // cout<<strlen(str)<<endl;

//     char str[12];
//     cout<<"Enter char string: "<<endl;
//     cin.getline(str,12);
// for(char ch: str){
//     cout<<ch<<" ";
// }
    int len=0;
    char str[15]="saurabh nishad";
    for(int i=0;i!='\0';i++){
        len++;
    }
    cout<<"len : "<<len<<endl;
    return 0;
}

// input
// cin.getline(str,len,delim?) ye pura space ke baad wale sentence ko bhi print karwata hai
// cin.getline(str,len,'#') ye jabtak ye sign ko nhi input le leta tbb tk print karayega
