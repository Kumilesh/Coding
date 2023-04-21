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

int f(int i,int j,int aand,int sum, int m,int n,int aarr[],int barr[]){
        if(i>m || j>n) return 1e9;
        if(i==m && j==n) return sum;
        if((aarr[i] & aand) !=barr[j]){
            return  f(i+1,j,aand & aarr[i],sum,m,n,aarr,barr);
        }
        //cout<<sum<<" "<<aand<<" "<<"\n";
        int k= min(f(i+1,j+1,127,sum+aarr[i],m,n,aarr,barr),f(i+1,j,aand & aarr[i],sum,m,n,aarr,barr));
        //cout<<"k"<<":"<<k<<"\n";
        return k;
        //return sum;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int aarr[m];
        int barr[n];
        for(int i=0;i<m;i++){
            cin>>aarr[i];
        }
        for(int i=0;i<n;i++){
            cin>>barr[i];
        }
        cout<<f(0,0,127,0,m,n,aarr,barr);
    }
    return 0;
}
