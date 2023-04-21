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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int flag=0;
        int zcnt=0;
        ll ncnt=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>0)flag=1;
            if(flag==1){
                if(arr[i]==0)
                zcnt+=1;
                else
                ncnt+=arr[i];
            }
        }
        cout<<zcnt+ncnt<<"\n";

        
    }
    return 0;
}
