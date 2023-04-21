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

    int t;
    cin >> t;
    while(t--){
        int n,z;
        cin>>n>>z;
        int arr[n];
        for(i,0,n)
        {
            cin>>arr[i];
        }
        int j=0;
        int max=0;
        while(j<n)
        {
            int a1=(arr[j] | z);
            // print(a1);
            if(a1>max)
            {
                max=a1;
            }
            z=(arr[j] & z);
            // print(z);
            j+=1;
        }
        println(max);
    }
    return 0;
}
