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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(i,0,n)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
       int low=1,high=n-2;
       int attack=arr[n-1],defence=1000-arr[0];
       while(low<high)
       {
        if(attack>defence)
        {
            defence+=1000-arr[low];
            low++;
        }
        else
        {
            attack+=arr[high];
            high--;
        }
       }
       int val1, val2;
       int maxvalue;
       if(low==high)
       {
        
            defence+=1000-arr[high];
             val1=attack*defence;
             defence-=1000-arr[high];
         
         
            attack+=arr[high];
            val2=attack*defence;
            maxvalue=max(val1,val2);
            cout<<maxvalue<<"\n";
       }
        
         else
         {
       cout<<attack*defence<<"\n";
         }

        
    }
    return 0;
}
