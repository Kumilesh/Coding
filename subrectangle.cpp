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
        int a,b;
        cin>>a>>b;
        int k,mini=-9999999;
        int h,w;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cin>>k;
                mini=max(mini,k);
                if(mini==k)
                {
                h=i+1;
                w=j+1;
                }
            }
        }
        //cout<<h<<w<<"jb";
        int g=max(abs(1-h)+1,abs(a-h)+1);
        int l=max(abs(1-w)+1,abs(b-w)+1);
        cout<<g*l<<"\n";
    }
    return 0;
}
