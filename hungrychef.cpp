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
        int x,y,n,r;
        cin>>x>>y>>n>>r;
        int ans1=0,ans2=0;
        //if(x>r && y>r){cout<<-1<<"\n";continue;}
        int p=ceil((float)(r-y*n)/(x-y));
        if((x-y)*p>(r-(y*n)) || (r-y*n)>0 || (x-y)>0){
            ans1=0;
            ans2=n-ans1;
        }
    
        else{
            ans1=p;
            ans2=n-ans1;
        }
        cout<<ans1<<" "<<ans2<<"\n";
    }
    return 0;
}
