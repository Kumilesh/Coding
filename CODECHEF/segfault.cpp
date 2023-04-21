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

    int t ;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vi t(n+2,0);
        vi ch(n+2,0);
        for(i,0,n)
        {
            int l,h;
            cin>>l>>h;
            t[l]++;
            t[h+1]--;
            if(i+1 >= l && i+1 <=h)
            {
                ch[i+1]=1;
            }
        }
        for(i,1,n+1)
        {
            t[i]+=t[i-1];
        }
        // for(i,0,n+1)
        // cout<<ch[i]<<" ";
        // cout<<"\n";
        // for(i,0,n+1)
        // cout<<t[i]<<" ";
        // cout<<"\n";
        int c=0;
        vi a;
        for(i,1,n+1)
        {
            if(ch[i]!=1 && t[i]==n-1)
            {
                c++;
                a.push_back(i);
            }
        }
        cout<<c<<"\n";
        //cout<<a[1];
        for(i,0,a.size())
        {
        cout<<a[i]<<"\n";
        }
        
    }
    return 0;
}
