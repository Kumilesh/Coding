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
        int a,b,c;
        cin>>a>>b>>c;
        //cout<< (a xor b);
        int z=1;
        while(z<c)
        {
            z=z*2;
        }
        if((a xor b) ==0)
        {
            println(0);
        }
        else if((a xor b) <c)
        {
            println(1);
        }
        else if((a xor b) <z)
        {
            println(2);
        }
        else
        {
            println(-1);
        }
    }
    return 0;
}
