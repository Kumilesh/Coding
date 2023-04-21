#include<bits/stdc++.h>
using namespace std;
const int di[] = {0, 1, 0, -1};
const int dj[] = {1, 0, -1, 0};
bool vis[1001][1001];
void dfs(int i,int j,vector<string> &v,int m,int n,vector<char> &c)
{   if(i>=m || j>=n)
    return;
    if(i<0 || j<0 )
    return ;
    if(vis[i][j]==true)
    return;
    vis[i][j]=true;
    if(v[i][j]=='B')
    {
        cout<<"YES"<<"\n"<<c.size()<<"\n";
        for(int i=0;i<c.size();i++)
        {
            cout<<c[i];
        }
        return;
    }
    
    if((v[i][j]=='.') || v[i][j]=='A')
    {
    c.push_back('L');
    dfs(i-1,j,v,m,n,c);
    for(int i=0;i<c.size();i++)
        {
            cout<<c[i];
        }
        cout<<endl;
    c.pop_back();
    c.push_back('R');
    dfs(i+1,j,v,m,n,c);
    c.pop_back();
    c.push_back('U');
    dfs(i,j-1,v,m,n,c);
    c.pop_back();
    c.push_back('D');
    dfs(i,j+1,v,m,n,c);
    c.pop_back();
    }

}
int main()
{
    int m,n;
    cin>>m>>n;
    
    string s;
    vector<string> v;
    int a=0;
    for(int i=0;i<m;i++)
    {
        cin>>s;
        v.push_back(s);
        a++;
    }
    int cnt=0;
    `*/..00                                                                                       
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vis[i][j]==true || v[i][j]=='#')
            {
                continue;
            }
            if(v[i][j]=='A')
            {
            vector<char> a;
            dfs(i,j,v,m,n,a);
            break;
            }

        }
    }
    cout<<cnt;
}