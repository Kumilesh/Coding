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
    vector<char> vow{'a','e','i','o','u'};
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int cnt=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(find(vow.begin(),vow.end(),s[i])==vow.end())
            {
                //cout<<cnt<<" ";
                cnt++;
            }
            else
            {
                cnt=0;
            }
            if(cnt>=4)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

        
    }
    return 0;
}
