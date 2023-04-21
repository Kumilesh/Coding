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
    int count;
    int arr[]={4,8,16,32,64,128,256,512,1024,2048};
    for(i,0,9)
    {
        for(j,0,9)
        {
            for(k,0,9)
            {
                if(i!=j && i!=k && j!=k)
                {
                    if((i xor j xor k)==0)
                    {
                        cout<<i<<" "<<j<<" "<<k<<"\n";
                        count++;

                    }
                }
            }
        }
        cout<<count<<" ";
    }
    cout<<count<<"\n";
    
    
}
