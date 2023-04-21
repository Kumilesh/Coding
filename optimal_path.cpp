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
        int n,m;
        cin>>n>>m;
        ll row_sum=0,col_num=n*m;
        ll col_sum=0;
        for(int i=0;i<m;i++)
        {
            row_sum+=i+1;
        }
        for(int j=1;j<=n-1;j++)
        {
            col_sum+=(col_num);
            col_num-=m;
            
        }
        println(row_sum+col_sum);
    }
    return 0;
}
