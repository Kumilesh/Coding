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
void permutate(string a,int l,int r)
{
    if(l==r)
    {
        cout<<a<<endl;
    }
    else
    {
        for(int i=l;i<r;i++)
        {
            swap(a[l],a[i]);
            permutate(a,l+1,r);
            swap(a[l],a[i]);
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        
    }
    return 0;
}
