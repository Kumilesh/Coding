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
    int t;
    
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(n*0.1<100)
        cout<<100;
        else 
        cout<<n*0.1;
        cout<<"\n";
        
    }
    return 0;
}
