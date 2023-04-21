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
        long long pos=0,neg=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a>0)
            {
                pos+=1;
            }
            else if(a==0)
            {
                continue;
            }
            else
            {
                neg+=1;
            }
        }
        long long posi,negi;
        if(pos>0)
        {
            posi=pos*(pos-1)/2;
        }
        else
        {
            posi=0;
        }
        if(neg>0)
        {
            negi=neg*(neg-1)/2;
        }
        else
        {
            negi=0;
        }
        cout<<posi+negi<<endl;
        
    }
    return 0;
}
