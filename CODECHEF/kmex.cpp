//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define for(u,i,j) for(int u=i;u<j;u++)
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vi freq(n+1,0);
        int arr[n];
        int me[n];
        for(i,0,n)
        {
        cin>>arr[i];
        freq[arr[i]]++;
        }
        int mex=0;
        for(i,0,k)
        {
            if(freq[i])
            {
                mex++;
            }
            else
            {
                break;
            }
        }
        int av=n-freq[k];
        if(k<=m && mex==k && av>=m)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
        
    }
    return 0;
}
