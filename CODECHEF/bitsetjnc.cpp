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
//long long arr[10000000];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // bitset<10> b(9);
    // bitset<10> b1(25);
    // cout<<b<<"\n";
    // cout<<b1<<"\n";
    unordered_map<ll,int> mp;
    
    for(ll i=1;i<=10000;i++)
    {
        mp[i*i]=1;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        // bitset<10> b(n);
        // cout<<b<<"\n";
        int count=0;
        if(n%2==0)
        {
            
            if(mp.find(n)!=mp.end())
            {
                count=1;
            }
            bool flag=false;
        for(ll i=1;i<(int)sqrt(n);i++)
        {
            
            if(mp.find(n-(i*i))!=mp.end())
            {
                flag=true;
                count+=2;
            }
            

        }
        if(!flag)
            {
                count+=0;
            }
        }
        else
        {
            count+=0;
        }
        cout<<count<<"\n";
    }
        

    

    return 0;
}
