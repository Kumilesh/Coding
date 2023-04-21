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
        vector<pair<int ,int>> vp;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            //cout<<a<<b;
            vp.push_back(make_pair(a,b));
        }
        int ct=0;
        int arrlen=n*(n+1)/2
        for (int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {

            }
        }

        
    }
    return 0;
}
