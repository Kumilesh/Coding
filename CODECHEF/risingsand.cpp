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
        int n,k;
        cin>>n>>k;;
        int arr[n];
        for(i,0,n)
        {
            cin>>arr[i];
        }
        if(k==1)
        {
            int ans=(n-2+1)/2;
            cout<<ans<<"\n";
        }
        else{
            int ct=0;
            for(i,1,n-1)
            {
                if(arr[i]>(arr[i-1]+arr[i+1]))
                {
                    ct+=1;
                }
            }
            cout<<ct<<"\n";
        }
    }
        
    
    return 0;
}
