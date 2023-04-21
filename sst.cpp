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
        int a,b;
        cin>>a>>b;
        double c=(int)a/10;
        double d=(int)b/20;
        if(c==d)
        cout<<"ANY";
        else if(c>d)
        cout<<"FIRST";
        else
        cout<<"SECOND";
        cout<<"\n";
        
    }
    return 0;
}
