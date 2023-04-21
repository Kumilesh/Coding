#include <bits/stdc++.h>
using namespace std;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);

typedef long long ll;
typedef pair<int, int> ii;
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1 || b==1)
        {
            cout<<-1;
        }
        else if(__gcd(a,b)==1)
        {
            cout<<1;
        }
       else
       {
           cout<<0;
       }
        cout<<endl;
    }
}