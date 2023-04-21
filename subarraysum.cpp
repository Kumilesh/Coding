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
int f(int ind,int n,vector<int> &arr,deque<int> &dq){
    if(ind>n)return -1e9;
    if(dq.size()==n){
        int sum=0;
        int preXor=0;
        for(auto it:dq){
            int val=preXor ^ it;
            //dq.push_back(d.front());
            cout<<it<<" ";
            //dq.pop_front();
            preXor=val;
            sum+=val;
        }
        cout<<"\n";
        return sum;;
    }
    dq.push_back(arr[ind]);
    int front=f(ind+1,n,arr,dq);
    dq.pop_back();
    dq.push_front(arr[ind]);
    int back=f(ind+1,n,arr,dq);
    dq.pop_front();
    return max(front,back);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        deque<int> dq;
        cout<<f(0,n,arr,dq);
        
    }
    return 0;
}
