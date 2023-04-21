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
int dp[101][101];
int dpfunc(int n, vector<vector<int>> &points,int last)
{
        int maxi=0;   
        for(int j=0;j<3;j++)
        {
            if(j!=last)
            {
            maxi=max(points[0][j],maxi);
            }
        }
        dp[0][last]=maxi;
        for(int i=0;i<n;i++)
        {
            int maxi=0;
            for(int j=0;j<3;j++)
            {
                maxi=max(dp[i][j],maxi);
            }

        }
    

}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    int maxi=0;
    for(int j=0;j<3;j++)
    {
    //cout<<"md c"<<j<<" ";
        maxi= max(maxi,points[n-1][j]+dpfunc(n-2,points,j));
    }
    return maxi;

    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v(n,vector<int>(3,0));
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                dp[i][j]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<3;j++)
            {
                //int a;
                //cin>>a;
                cin>>v[i][j];
            }
        }
        cout<<ninjaTraining(n,v)<<"\n";
    }
    return 0;
    
}
