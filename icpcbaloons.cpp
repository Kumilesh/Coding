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

    int t = 1;
    cin >> t;
    int hash[26];
    while(t--){
        int n;
        cin>>n;
        char str[n];
        memset(hash,0,sizeof(hash));
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(hash[str[i]-'A']==0)
            {
            hash[str[i]-'A']=1;
            count+=2;
            }
            else
            count+=1;
        }
        cout<<count<<"\n";
        
    }
    return 0;
}
