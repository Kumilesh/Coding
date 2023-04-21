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

    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0){
            cout<<ceil(n/3)<<"\n";
        }
        else if(n%3==2){
            cout<<ceil(0)<<"\n";
        }
        else{
            if(n==1){
                cout<<2<<"\n";
            }
            else{
                cout<<n/3+1<<"\n";
            }
        }
        
    }
    return 0;
}
