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
    //cin >> t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        vector<int> sum_arr(n+1);
        sum_arr[0]=0;
        int maxm=0;
        for(int i=0;i<n;i++){
           cin>>arr[i];
           sum_arr[i+1]=sum_arr[i]+arr[i];
        }
        int sum=0;
        int max_cnt=0;
        for(int i=k,j=0;i<n;i++,j++){
            if((arr[i+k]-arr[j]) == (arr[i+k+1]-arr[j+1])){
                max_cnt++;
            }
            else{
                max_cnt=0;
            }
        }
        cout<<max_cnt;
        
    }
    return 0;
}
