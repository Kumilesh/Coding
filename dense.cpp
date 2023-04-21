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
        int n;
        char str[n];
        cin>>n;
        for(i,0,n)
        {
            cin>>str[i];
        }
        int j=0;
        int k=n-1;
        int ans=0;
        while(j<=k)
        {
            if(str[j]=='(' && str[k]==')')
            {
                j+=1;
                k-=1;
            }
            else
            {
            if(str[j]==')')
            {
                ans+=1;
                j+=1;
            }
            if(str[k]=='(')
            {
                ans+=1;
                k-=1;
            }
            }
        }
        println(ans);
        
    }
    return 0;
}
