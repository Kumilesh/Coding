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

    int t ;
    cin >> t;
    while(t--){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        bool flag=false;
        for(i,1,9)
        {
            for(j,1,9)
            {
                int d1=0,d2=0;
                if(i!=x1 && j!=y1)
                d1=abs(i-x1)+abs(j-y1);
                if(i!=x2 && j!=y2 )
                d2=abs(i-x2)+abs(j-y2);
                if(d1==3 && d2==3)
                {
                    flag=true;
                    break;
                }
            }
        }
        if(flag)
        {
            println("YES");
        }
        else{
            println("NO");
        }
        
    }
    return 0;
}
