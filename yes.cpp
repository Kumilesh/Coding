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

    int t = 1;
    cin >> t;
    int k=t;
    t++;
    while(t--){
        string s1;
        getline(cin,s1);
        if(k==t)
          continue;
        //cout<<s1<<" ";
        
        transform(s1.begin(),s1.end(),s1.begin(),::toupper);
        //cout<<s1<<" ";
        if(s1=="YES")cout<<"YES";
        else cout<<"NO";
        cout<<"\n";

        
    }
    return 0;
}
