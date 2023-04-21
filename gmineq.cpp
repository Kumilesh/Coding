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
        int n;
        cin>>n;
        int x=0;
        int y=0;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            if(num==-1)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if(abs(x-y)<2)
        {
            cout<<"YES";
        }
        else if(abs(x-y)==2)
        {
            if(x&1)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES";
            }
        }
        else
        {
            cout<<"NO";
        }
        cout<<"\n";
        
    }
    return 0;
}
