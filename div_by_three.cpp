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
        if(a%3==0||b%3==0)
        {
            println(0);
        }
        else
        {
            int c=a%3;
            int d=b%3;
            if(abs(c-d)==1)
            println(2);
            else
            println(1);
        }


    }
    return 0;
}
