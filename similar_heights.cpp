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
        map<int,int> mp;
        cin>>n;
        int arr[n];
        int maxEle=0;
         int minCnt=1e8;
        for(int i=0;i<n;i++)
        {
            int a;                                                                            
            cin>>a;
            mp[a]++;
            maxEle=max(maxEle,a);
        }
        int count=0;
        for(auto temp:mp)
        {
            //cout<<minCnt<<temp.second<<temp.first;
            if(temp.second!=1){
            minCnt=min(temp.second,minCnt);
           //cout<<minCnt;
           }
        }
        //cout<<"\n";
       
        for(auto temp:mp){
            if(temp.second==1)
            count+=1;
        }
        //cout<<count<<" "<<mp[maxEle]<<" "<<maxEle;
        if( count==1 && mp[maxEle]==1 &&n>2){
           if( minCnt==2)
            cout<<2<<"\n";
            else
            cout<<1<<"\n";
        }
            else
        cout<<((count+1)/2)<<"\n";
        

        
    }
    return 0;
}
