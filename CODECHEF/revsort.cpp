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
        int n,x;
        cin>>n>>x;
        int arr[n];
        int count=0;
        for(i,0,n)
        {
            count=1;
            cin>>arr[i];
        }
        bool flag=true;
        for(i,0,n-1)
        {
            if(arr[i]>arr[i+1])
            {
                if(arr[i]+arr[i+1]<=x)
                {
                    swap(arr[i],arr[i+1]);
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            println("YES");
        }
        else
        {
            println("NO");
        }
    }
    return 0;
}
