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
ll N=1e9+7;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<long long> power;
    long long pow=1;
    power.push_back(1);
    for(i,1,1e6+1)
    {
        pow*=2;
        pow=pow%N;
        power.push_back(pow);
    }
    

    int t ;
    cin >> t;
    while(t--){
        int n,x;
        cin>>n>>x;
        ll out=x+x*(power[n-1]-1)%N;
        println(out%N);

        
    }
    return 0;
}
