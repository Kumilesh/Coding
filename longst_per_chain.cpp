//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define REP(u,i,j) for(int u=i;u<j;u++)
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
        cout<<n<<"\n";
        int arr[n+1];
        REP(i,1,n+1){
            arr[i]=i;
        }
        REP(i,1,n+1){
            REP(j,1,n+1){
                cout<<arr[j]<<" ";
            }
            cout<<"\n";
            if(i!=n){
                swap(arr[i],arr[i+1]);
            }
        }

    }
    return 0;
}
