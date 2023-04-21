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
int mod=(int)(1e9+7);
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    int dp[n][m];
    cout<<mat[3][3]<<" ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=0;
            cout<<"ernf ";
        }
    }
    //dp[0][0]=1;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         if(mat[i][j]==-1)
    //         {
    //             dp[i][j]=0;
    //         }
    //             else if(i==0 && j==0)
    //             {
    //                 dp[i][j]=1;
    //             }
    //             else
    //             {
    //                 int up=0;
    //                 int left=0;
    //                 if(i>0)
    //                 {
    //                     up=dp[i-1][j];
    //                 }
    //                 if(j>0)
    //                 {
    //                     left=dp[i][j-1];
    //                 }
    //                dp[i][j]=(up+left)%mod;
    //             }
    //         }
        
    // }
    return dp[n-1][m-1];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
        cin>>mat[i][j];
        //cout<<mat[i][j]<<" ";
        }
        //cout<<mat[1][1];
       cout<<mazeObstacles(n,m,mat);

        
    }
    return 0;
}
