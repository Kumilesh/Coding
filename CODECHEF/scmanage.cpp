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
        int n,m;
        cin>>n>>m;
        unordered_map<int,int> mp;
        int ans=0;
        int freq[n+1];
        for(int i=1;i<n+1;i++)
        {
            freq[i]=0;
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            freq[x]++;
            //cout<<freq[x]<<" ";
        }
        int low=1,high=2*m;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            //cout<<mid<<" ";
            ll help=0,left=0;
            for(int i=1;i<=n;i++)
            {
                if(mid>freq[i])
                {
                    //cout<<a.second;
                help+=(mid-freq[i])/2;
                //cout<<help<<" ";
                }
                else
                left+=freq[i]-mid;
            }
            bool can_do=false;
            can_do=(help>=left);
            if(can_do)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}
