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
int f(int n,int m,int k,int p,int l){
    if(n<1 || m<1  || k<0)return 0;
    if(n==1 && m==1 && k==0){
        return 1;
    }
    //for(int p=k;p>=0;p--)
    int ans=0;
    for(int i=n;i>=0;i--){
        for(int j=m;j>=0;j--){
            //cout<<i<<" "<<j<<"\n";
            if(i==0 && j==0){
                continue;
            }
            ans+= f(n-i,m-j,k-1,p,l);
        }
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        cout<<f(n,m,k,n,m)<<"\n";
        
    }
    return 0;
}
