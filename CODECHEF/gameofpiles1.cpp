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
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        if(!flag)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]>1)
                {
                    sum+=(arr[i]-1);
                }
            }
            if(sum%2!=0)
            {
                cout<<"CHEF"<<"\n";
            }
            else
            {
                cout<<"CHEFINA"<<"\n";
            }
        }


        
    }
    return 0;
}
