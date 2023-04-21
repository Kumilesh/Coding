//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=0;i<a-1;i++)
    {
        int c;
        cin>>c;
        sum+=c; 
    }
    int d=a*b; 
    if(sum>a*b)
    {
        cout<<0;
    }
    else
    {
        cout<<a*b-sum;
    }
        cout<<endl;
    }
    
    return 0;
}
