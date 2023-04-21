#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> v[N];
bool vis[N];
void dfs(int vertex)
{
    vis[vertex]=true;
    for(int child: v[vertex])
    {
        cout<< "par"<<vertex<<" child"<<child<<"\n";
        if(vis[child])continue;
    
    dfs(child);
    }
}
int main()
{
int n,p;
cin>>p;
cin>>n; 
for(int i=0;i<n;i++)
{
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
    cout<<v[b][0]<<" "<< v[a][0]<<"\n";
}
for(int i=1;i<=p;i++)
{
 if(vis[i]) continue;
 dfs(i);
 vis[i]=true;
}


}