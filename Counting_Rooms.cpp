#include<bits/stdc++.h>
using namespace std;
const int di[] = {0, 1, 0, -1};
const int dj[] = {1, 0, -1, 0};
bool vis[1001][1001];
void dfs(int i,int j,vector<string> &v,int m,int n)
{   if(i>=m || j>=n)
    return;
    if(i<0 || j<0 )
    return ;
    if(vis[i][j]==true)
    return;
    vis[i][j]=true;
    
    if(v[i][j]=='.')
    {
    dfs(i-1,j,v,m,n);
    dfs(i+1,j,v,m,n);
    dfs(i,j-1,v,m,n);
    dfs(i,j+1,v,m,n);
    }

}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<m<<n;
    string s;
    vector<string> v;
    int a=0;
    for(int i=0;i<m;i++)
    {
        cin>>s;
        v.push_back(s);
        a++;
    }
    cout<<a;
    int cnt=0;
    cout<<cnt;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vis[i][j]==true || v[i][j]=='#')
            {
                continue;
            }
            cnt++;
            dfs(i,j,v,m,n);

        }
    }
    cout<<cnt;
}