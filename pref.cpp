//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define rep(u,i,j) for(int u=i;u<j;u++)
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"
int dp[(int)1e5];
int f(int index,int k,int a){
    if(index>k){
        return 0;
    }
    return a*(index+f(index+1,k,a));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        cout<<f(0,3,2);
    }
    return 0;
}
