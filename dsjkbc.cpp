#include <bits/stdc++.h>
using namespace std;

#define lld long double
#define ll long long
#define inf 0x3f3f3f3f
#define linf 0x3f3f3f3f3f3f3f3fll
#define ull unsigned long long
#define PII pair<int, int>
#define fi first
#define se second
#define mod 1000000007
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define fire ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fire2 cin.tie(0)->sync_with_stdio(false);
const int N = 200010;
int n;
int a[N];
void solve(){
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool two = false;
    for(int i = 0; i < n; i++){
        while(a[i] % 10 != 0 && a[i] % 10 != 2){
            a[i] += a[i] % 10;
        }
        two |= (a[i] % 10 == 2);
    }
    if(!two){
        cout << (a == vector<int>(n, a[0]) ? "Yes" : "No") << '\n';
        return;
    }
    int val = a[0] % 20;
    bool ok = true;
    for(int i = 0; i < n; i++){
        ok &= (a[i] % 20 == val);
    }
    if(ok){
        cout << "Yes\n";
    }
    else cout << "No\n";
}
int main()
{
    fire;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}