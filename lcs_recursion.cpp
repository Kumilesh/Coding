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
int dp[1001][1001];
int lcs(char a[],char b[],int m,int n)
{
    for(i,1,m+1)
    {
        for(j,1,n+1)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    char a[]={'a','b','c','d','g','h'};
    char b[]={'a','b','e','d','f','h','r'};
    int m=6;
    int n=7;
    int ans=lcs(a,b,m,n);
    cout<<ans;
    return 0;
}
