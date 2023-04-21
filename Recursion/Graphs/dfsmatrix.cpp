#include<bits/stdc++.h>
using namespace std;
int dfs(int i,int j,vector<string> v)
{
    if(i<0 || j<0 )
    return ;
    dfs(i-1,j,v);
    dfs(i+1,j,v);
    dfs(i,j-1,v);
    dfs(i,j+1,v);

}
int main()
{

}