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

    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int a_arr[31],b_arr[31];
        if(a==b)
        {
            println(0);
        }
        else if(a<b)
        {
            if(a+n>b)
            {
                println(1);
            }
            else{
                println(-1);
            }
        }
        else 
        {
            if(n>=a)
            {
                println(1);
            }
            else
            {          
                println(-1);
            }
        }
        
    }
    return 0;
}
