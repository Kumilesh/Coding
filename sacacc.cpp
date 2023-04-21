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
        int a,d;
        cin>>a>>d;
        int c=a/2;
        int b=d-c;
        int i=0;
        while(i<a)
        {
            if(a%2==0 && b==d)
            {
                b++;
                continue;
                
            }
            cout<<b<<" ";
            i++;
            b++;
        }
        cout<<endl;
    }
    return 0;
}
