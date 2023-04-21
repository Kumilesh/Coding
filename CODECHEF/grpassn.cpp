//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
//#define for(u,i,j) for(int u=i;u<j;u++)
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        unordered_map<int,int> mp;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
        cin>>a;
        mp[a]+=1;
        //cout<<mp[a];
        }
        bool flag=0;
        for(auto num:mp)
        {
            num.second=(num.second)%(num.first);
            if((num.second)==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        cout<<"\n";
        
    }
    return 0;
}
