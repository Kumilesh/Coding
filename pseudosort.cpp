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
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            v.push_back(num);
        }
        int ct=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                swap(v[i],v[i+1]);
                ct+=1;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                swap(v[i],v[i+1]);
                ct+=1;
            }k
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        if(ct==0 || ct==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<"\n";

        
    }
    return 0;
}
