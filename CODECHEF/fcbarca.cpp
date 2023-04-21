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
int arr[1]={0};
void fcbarca(int n,int k,bool flag,int sum)
{
    //cout<<k;
    if(k<0)
    return ;
    if(k==0 && flag==true)
    {
        //cout<<arr[0]<<"output\n";
        arr[0]+=1;
        return ;
    }
    if(!flag)
    {
        //cout<<"mes\n";
        for(i,0,n)
        {
        //cout<<k<<"other player\n";
        fcbarca(n,k-1,true,sum);
        
        }
        return;

    }
    else{
        //cout<<k<<"messi\n";
        fcbarca(n,k-1,false,sum);
    for(i,1,n)
    {
        //cout<<k<<"other\n";  
         fcbarca(n,k-1,true,sum);
         //fcbarca(n,k-1,true);
          
    }
        
         
         return;
    }
    return ;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=0;
        fcbarca(b,a-1,false,sum);
        cout<<arr[0]<<"\n";
        arr[0]=0;
    }
    return 0;
}
