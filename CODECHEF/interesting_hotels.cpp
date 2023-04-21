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
vector<int> hotels(int n, int k,vector<int>& a) {
	vector<int> hotels;
    vector<int> maxi_ele;
    int maxi_ind=1;
    int maxi=a[1];
    int j=0;
    int i=0;
    while(i<a.size())
    {
        while(k-- && i<a.size())
        {
            if(a[i]>maxi)
            {
                maxi=a[i];
                maxi_ind=i;
                i++;
            }

        }

        if(a[j]>maxi)
        {
            hotels.push_back(j);
        }
        j++;
        k++;

    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vi k=hotels(n,v);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        
    }
    return 0;
}
