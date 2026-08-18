// Decimal to binary
// #include<iostream>
// using namespace std;

// int dec(int decimal){
//     int binary=0,power=1;
//     while(decimal>0){
//         int rem=decimal%2;
//         decimal=decimal/2;
//         binary+=(rem*power);
//         power=power*10;
//     }
//     return binary;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<dec(n);
// }

// BINARY TO DECIMAL
#include<iostream>
using namespace std;
int binaryToDecimal(int binary){
    int decimal=0,power=1,rem;
    while(binary>0){
        rem=binary%10;
        decimal+=rem*power;
        binary/=10;
        power*=2;
    }
    return decimal;
}
int main(){
    cout<<binaryToDecimal(1010)<<endl;
}