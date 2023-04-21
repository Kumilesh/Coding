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
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(i,0,n)cin>>arr[i];
        string temp="";
        for(i,0,m)temp+='B';
        for(j,0,n){
            if(arr[j]-1<m-arr[j]){
                temp[arr[j]-1]=='A'? temp[arr[j]-1]='A':temp[m-arr[j]]='A';
            }

        }
        cout<<temp<<"\n";
        
    }
    return 0;
}
