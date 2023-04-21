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
// int house_robber(vector<int>& nums,int n)
// {
//     if(n<0)
//     {
//         return 0;
//     }
//     if(n==0)
//     {
//         return nums[0];
//     }
//     int pick=nums[n]+house_robber(nums,n-2);
//     int notpick=house_robber(nums,n-1);
//     return max(pick,notpick);
    
    
// }
int house_robber(vector<int>& nums,int n)
    {
        int dp[n];
        dp[0]=nums[0];
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                dp[i]=max(dp[i-1],nums[i]);
            }
            else
            {
                int pick=dp[i-2]+nums[i];
                int notpick=dp[i-1];
                dp[i]=max(pick,notpick);
            }
        }
        // for(int i=0;i<=n;i++)
        // {
        //     cout<<dp[i]<<" ";
        // }
        // cout<<"\n";
        return dp[n];
        
        
  }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        int n;
        cin>>n;
        vi v(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cout<<house_robber(v,n-1);
        
    }
    return 0;
}
