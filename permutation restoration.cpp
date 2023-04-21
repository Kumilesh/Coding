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

    int t ;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        vector<int> ans(n+1);
        vector<vector<pair<int,int>>> segments(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(ll i=1;i<=n;i++)
        {
            ll minm=i/(arr[i]+1)+1,maxm=n;
            if(arr[i])
            {
                maxm=i/arr[i];
            }
            segments[minm].push_back({maxm,i});
        }
        set<pair<ll,ll>> running_seg;
        for(ll i=1;i<=n;i++)
        {
            for(auto x:segments[i])
            {
                running_seg.insert(x);
            }
            ans[running_seg.begin()->second]=i;
            //cout<<"begin: "<<running_seg.begin()->first<<" ";
            running_seg.erase(running_seg.begin());
            //cout<<"2nd begin:" <<running_seg.begin()->first;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

        
    }
    return 0;
}
