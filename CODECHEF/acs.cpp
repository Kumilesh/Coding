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
        cin>>n;
        int c_100=n/100;
        int r_100=n%100;
        n=n%100;
        int c_1=n;
        if((c_1+c_100)>10)
        {
            println(-1);
        }
        else
        {
            println(c_1+c_100);
        }


        
    }
    return 0;
}
