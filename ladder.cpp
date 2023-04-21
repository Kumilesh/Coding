//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
//#define for(u,i,j) for(int u=i;u<j;u++)
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    multiset<pair<int,int>> s;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        s.insert({a,b});
    }
    // for(auto p:s)
    // {
    //     cout<<p.first<<" "<<p.second<<"\n";
    // }
    vector<int> check(n,-1);
    // for(int i=0;i<n;i++)
    // cout<<check[i]<<" ";
    for(auto p: s)
        {
            int start=p.first,end=p.second;
            for(int i=p.first;i<p.second;i++)
            {
                if(check[i]==-1)
                {
                    check[i]=1;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            if(check[i]==-1){
            cout<<-1;
            exit(0);}
        }
        cout<<"5";
    
    //auto it=s.begin();
    int low=0,high=n-1;
    int ans=0;
    bool flag=true;
    for(int i=1;i<n;i++)
    {
        ans+=i;
        int j=0;
        for(auto p: s)
        {
            int start=p.first,end=p.second;
            //j to mid must lie in between start and end
            if(start<=1 && ans<=end-1)
            {
                j+=i;
                ans+=i;
            }
            else
            {
                flag=false;
                break;
            }
            //otherwise increase low
        }
    }
    cout<<high;
}
