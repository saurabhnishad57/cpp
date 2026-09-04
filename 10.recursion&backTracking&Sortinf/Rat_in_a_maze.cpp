#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &mat,int r,int c, string path,vector<string> &ans){
    int n=mat.size();
    //base case
    if(r<0 || c<0 ||r>=n || c>=n ||mat[r][c]==0 ||mat[r][c]==-1 ){
        return;
    }
    //ans case
    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }
    // visited[r][c]=true;
    //track same path D,U=D,U
    mat[r][c]=-1; //visit

    helper(mat,r+1,c,path+"D",ans);  //DOWN
    helper(mat,r-1,c,path+"U",ans);  //Up
    helper(mat,r,c+1,path+"R",ans);  //left
    helper(mat,r,c-1,path+"L",ans);  //right
    //backtrack
    // visited[r][c]=false;
    mat[r][c]=1;

}
vector<string> findPath(vector<vector<int>> &mat){
    vector<string> ans;
    int n=mat.size();
    // vector<vector<bool>> visited(n,vector<bool>(n,false));
    string path="";
    helper(mat,0,0,path,ans);
    return ans;
}
int main(){
    vector<vector<int>> mat={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans=findPath(mat);

    for(string path: ans){
        cout<<path<<endl;
    }
    return 0;
}