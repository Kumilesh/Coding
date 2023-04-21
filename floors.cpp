//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=a/10;
        int d=b/10;
        if(a%10==0)
        {
            c-=1;
        }
        if(b%10==0)
        {
            d-=1;
        }
        println(abs(d-c));
        
    }
    return 0;
}
