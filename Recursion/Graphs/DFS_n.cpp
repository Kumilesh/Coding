//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"
vector<bool> b(M);
void dfs(vector<vector<int>> &a,int data)
{
    if(!b[data])
    {
    cout<<data;
    b[data]=true;
    }
    for(int child:a[data])
    {
        
        if(!b[child])
        {
            cout<<child;
            b[child]=true;
            dfs(a,child);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int v,e;
    cin>>v>>e;
    vector<vector<int>> arr(v+1);
    for(int i=0;i<e;i++)
    {
        int a,b ;
        cin>>a>>b;
        //cout<<a<<b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    dfs(arr,1);
    
    // for(int i=1;i<=v;i++)
    // {
    //     if(!b[i])
    //     dfs(arr,i);
    // }
}
