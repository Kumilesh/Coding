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
int ans=0;
int  armtrn(int n,int arr[],int attacksum,int defensesum)
{
    if(n<0)
    {
        return attacksum*defensesum;
    }
    ll left=armtrn(--n,arr,arr[n]+attacksum,defensesum);
    ll right=armtrn(--n,arr,attacksum,1000-arr[n]+defensesum);
    return max(left,right);

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<armtrn(n-1,arr,0,0)<<"\n";
        
    }
    return 0;
}
