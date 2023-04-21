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
bool f(vector<int> & arr)
{
    auto it=find(arr.begin(),arr.end(),0);
    
    if(it==arr.end()+1)return 0;
    //cout<<it-arr.begin()<<" ";
    int k=it-arr.begin();
    //cout<<k<<" ";
    it=find(arr.begin(),arr.end(),k+1);
    
    if(it==arr.end())return 0;
    k=it-arr.begin();
    it=find(arr.begin(),arr.end(),k+1);
    
    if(it==arr.end())return 0;
    //cout<<k<<"\n";
    return 1;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(3);
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        bool ans=f(arr);
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
        
    }
    return 0;
}
