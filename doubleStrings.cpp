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
        vector<string> vst(n);
        for(int i=0;i<n;i++){
            cin>>vst[i];
        }
        map<string,int> st;
        map<string,int> ans;
        for(int i=0;i<n;i++){
            st[vst[i]]=0;
            ans[vst[i]]=0;
        }
        
        for(int i=0;i<n-1;i++){
            string s=vst[i];
            for(int j=i+1;j<s.size();j++)
            {
                int len=s.size();
                string pre=vst[i].substr(0,j);
                string suf=vst[i].substr(j,len-j);
                if(find(vst.begin(),st.end(),pre)!=st.end() && find(st.begin(),st.end(),pre)!=st.end()){
                    ans[vst[i]]=1;
                    break;
                }

            }
        }
        for(auto val:ans)
        {
            cout<<val.second<<"";
        }
        cout<<"\n";
        
    }
    return 0;
}
