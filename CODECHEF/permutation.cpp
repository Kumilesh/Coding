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
        int check[n+1];
        for(int i=1;i<=n;i++)
        {
            check[i]=0;
        }
        int d=2;
        cout<<d<<"\n";
        for(int i=1;i<=n;i++)
        {
            int k=i;
            if(check[i]!=1)
            {
                cout<<i<<" ";
                while(k*d<=n)
                {
                    cout<<k*d<<" ";
                    k=k*d;
                    check[k]=1;
                }
                check[i]=1;
            }
        }
        cout<<"\n";

        
    }
    return 0;
}
