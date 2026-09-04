#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MaxRowSum(int matrix[][3],int rows,int cols){
    int maxRowSum=INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSum=0;
        for(int j=0;j<cols;j++){
            rowSum+=matrix[i][j];
        }
        maxRowSum=max(maxRowSum,rowSum);
    }
    return maxRowSum;
}
int MaxColSum(int matrix[][3],int rows,int cols){
    int maxColSum=INT_MIN;
    for(int i=0;i<cols;i++){
        int colSum=0;
        for(int j=0;j<rows;j++){
            colSum+=matrix[i][j];
        }
        maxColSum=max(maxColSum,colSum);
    }
    return maxColSum;
}
int DiagonalSum(int matrix[][3],int rows,int cols){
    int sum=0;
    // pd:j=i;
    // sd: j=n-i-1
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(i==j) sum+=matrix[i][j];
    //         else sum+=matrix[i][j];
    //     }
    // }
    for(int i=0;i<rows;i++){
        sum+=matrix[i][i];
        if(i!=rows-1-i) sum+=matrix[i][rows-i-1];
    }
    return sum;
}
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //2d array
    
    int rows=3;
    int cols=3;
    cout<<MaxRowSum(matrix,rows,cols)<<endl;
    cout<<MaxColSum(matrix,rows,cols)<<endl;
    cout<<DiagonalSum(matrix,rows,cols)<<endl; //for square matrix;
    return 0;
}