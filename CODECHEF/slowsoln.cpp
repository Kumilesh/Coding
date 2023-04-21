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

    int t = 1;
    cin >> t;
    while(t--){
        int maxt,maxn,sumn;
        cin>>maxt>>maxn>>sumn;
        int ans=0;
        while((maxt--) && (sumn)>=0)
        {
            if(sumn>maxn)
            ans+=maxn*maxn;
            else
            ans+=sumn*sumn;
            sumn-=maxn;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}
