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
        int arr[2][2];
        int count=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j])
                {
                    count+=1;
                }
            }
        }
        if(count==0)
        {
            cout<<0<<"\n";
        }
        else if(count==4)
        {
            cout<<2<<"\n";
        }
        else
        {
            cout<<1<<"\n";
        }
        
        
        
    }
    return 0;
}
