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
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[2*n];
        for(int i=0;i<2*n;i++)cin>>arr[i];
        sort(arr,arr+2*n);
        int flag=1;
        for(int i=0;i<n;i++){
            if((arr[n+i]-arr[i])<k){
                //cout<<arr[n+i]<<arr[i]<<" "<<k;
                flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<"YES";
       else
       cout<<"NO"; 
       cout<<"\n";
        
    }
    return 0;
}
