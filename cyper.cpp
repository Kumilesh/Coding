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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int num[n];
        for(int i=0;i<n;i++)cin>>num[i];
        //for(int i=0;i<n;i++)cout<<num[i]<<" ";
        //cout<<5<<" ";
         int len=0;
        for(int j=0;j<n;j++)
        {
            cin>>len;
            //long long a=0;
            char cy[len];
            for(int i=0;i<len;i++){
                cin>>cy[i];
                if(cy[i]=='U'){
                    num[j]=(num[j]-1)%10;
                    if(num[j]<0)num[j]+=10;
                }
                else{
                num[j]=(num[j]+1)%10;}
            }
            //cout<<num[i]<<" "<<a<<" ";
         }
          for(int k:num)
            cout<<k<<" ";
        cout<<"\n";   
    }
}
    