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

    int t ;
    cin >> t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int req=n-x;
        if(req<=0)
        {
            cout<<0<<"\n";
        }
        else
        {
            int buy=(req+3)/4;
            cout<<buy<<"\n";
        }
        
    }
    return 0;
}
