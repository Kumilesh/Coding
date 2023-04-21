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

bool subsetSumToK(int n, int k, vector<int> &arr) {
    
    if(k==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }
    if(k>=arr[n-1])
    {
        return subsetSumToK(n-1,k-arr[n-1],arr) || subsetSumToK(n-1,k,arr);
    }
    return subsetSumToK(n-1,k,arr);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<subsetSumToK(n,k,arr)<<"\n";

        
    }
    return 0;
}
