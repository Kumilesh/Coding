//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define for(u,i,j) for(long long u=i;u<j;u++)
#define forr(u,i,j) for(int u=j;u>=i;u--)
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        int n,x;
        cin>>n>>x;
        long long arr[n];
        for(i,0,n)
        {
            cin>>arr[i];
        }
        //cout<<arr[n-1]<<" ";
        sort(arr,arr+n,greater<int>());
        //cout<<arr[n-1]<<" ";
        ll sumarr[n+1];
        sumarr[0]=arr[0];
        for(i,1,n)
        {
            sumarr[i]=sumarr[i-1]+arr[i];
        }
        for(i,0,x)
        {
            int x,y;
            cin>>x>>y;
            if(x==y)
            {
                cout<<sumarr[x-1]<<"\n";
            }
            else{
            cout<<(sumarr[x-1]-sumarr[x-y-1])<<"\n";
            }

        }
    return 0;
}
