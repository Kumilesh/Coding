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
int dp[1001][101];
int un_knapsack(int wt[],int val[],int w,int n)
{
    for(i,0,w+1)
    {
        for(j,0,n+1)
        {
            dp[i][j]=0;
        }
    }
    for(i,1,w+1)
    {
        for(j,1,n+1)
        {
        if(wt[j-1]>i)
        {
        dp[i][j]= dp[i][j-1];
        }
        else
        {
            int m1=val[j-1]+dp[i-wt[j-1]][j];
            int m2=dp[i][j-1];
            dp[i][j]= max(m1,m2);
        }

        }
    }
    return dp[w][n];
    

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int W=8;
    int val[]={10,40,50,70};
    int wt[]={1,3,4,5};
    int n=4;
    int ans=un_knapsack(wt,val,W,4);
    println(ans);
}

