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
        int arr[n];
        int startIndex,endIndex;
        for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        if(arr[i]==1)
        startIndex=i+1;
        else if(arr[i]==n)
        endIndex=i+1;
        }
        if(startIndex==1 && endIndex==n)
        cout<<"0"<<"\n";
        else if(startIndex<endIndex)
        cout<<((startIndex-1)+(n-endIndex))<<"\n";
        else
        cout<<((startIndex-1)+(n-endIndex))-1<<"\n";


        
    }
    return 0;
}
