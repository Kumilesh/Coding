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
        int inp;
        cin>>inp;
        if(inp&1)
        {
            for(int i=0;i<inp/2;i++)
            {
                cout<<"0";
            }
            cout<<"1";
            for(int i=0;i<inp/2;i++)
            {
                cout<<"0";
            }
        }
        else
        {
            cout<<"1";
            for(int i=0;i<inp-2;i++)
            {
                cout<<"0";
            }
            cout<<"1";
        }
        println("");
        
    }
    return 0;
}
