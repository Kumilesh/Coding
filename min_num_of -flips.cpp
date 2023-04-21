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
        int a;
        cin>>a;
        int countp=0,countn=0;
        for(int i=0;i<a;i++)
        {
            int b;
            cin>>b;
            if(b==1)
            countp++;
            else
            countn++;
        }
        int d=abs(countp-countn);
        if(d%2!=0)
        cout<<-1<<"\n";
        else
        cout<<d/2<<"\n";
        
    }
    return 0;
}
