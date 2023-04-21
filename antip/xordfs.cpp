#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
//vector<int> v[N];
bool vis[N];
//Adding edges to vertices
void addEdge(vector<vector<int>> &v,int x,int y)
{
	v[x].push_back(y);
}
//Dfs traversl
void dfs(vector<vector<int>> &v1,int vertex,int &ans,int arr[])
{
    vis[vertex]=true;
     ans=ans xor arr[vertex-1];
    for(int child: v1[vertex])
    {
        if(vis[child])continue;
        dfs(v1,child,ans,arr);
    }
}
int main()
{
    //Declaration and initialization
  int n;
  cin>>n;
  int arr[n];
  vector<vector<int>> v1(n+1);
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>arr[i];
  }
  for(int i=0;i<n-1;i++)
  {
      int b,c;
      cin>>b>>c;
      addEdge(v1,b,c);
  }
  int k;
  cin>>k;
  //flag=1 changes the elements in the array.
  for(int i=0;i<k;i++)
  {
      int flag;
      cin>>flag;
      if(flag==1)
      {
          int d,e;
          cin>>d>>e;
          arr[d-1]=e;
      }
      //Flag =2 computes the xor of subtree.
      //Rurring a dfs on the node gives its subtree.
      else if(flag==2)
      {
          int f;
          cin>>f;
          int ans=0;
         dfs(v1,f,ans,arr);
         for(int i=0;i<=n;i++)
         {
             vis[i]=false;
         }
         cout<<ans<<"\n";
      }
  }
}