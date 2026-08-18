// eligibility of voters

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter age : ";
//     cin>>age;
//     if(age>=18){
//         cout<<"You can vote\n";
//     }else{
//         cout<<"You can't vote\n";
//     }
//     return 0;
// }

// Grade system

// #include<iostream>
// using namespace std;
// int main(){
//     int grade;
//     cout<<"Enter grade : ";
//     cin>>grade;
//     if(grade>=90){
//         cout<<"A";
//     }else if(grade>=80 && grade<90){
//         cout<<"B";
//     }else if(grade>=70 && grade<80){
//         cout<<"C";
//     }else{
//         cout<<"D";
//     }
// }

// TO FIND CHARACTER LOWER OR UPPERCASE

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"lowercase";
    // }else{
    //     cout<<"Uppercase";
    // }
    // OR
    // if((ch)>=65 && (ch)<=90){  //implicit type conversion
    //     cout<<"Uppercase";
    // }else{
    //     cout<<"Lowercase";
    // }
    // OR
    cout<<(ch>=65 && ch<=90)?"Uppercase":"Lowercase";
}

// TERNARY STATEMENT
// condition?stt1:stt2;
