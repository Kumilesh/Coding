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

int sortArray(vector<int> &a, int n) {
    // Write your code here.
    int min_ind=0;
    int max_ind=0;
    for(int i=1;i<a.size();i++)
    {
        if(a[min_ind]>a[i])
        {
            min_ind=i;
        }
        if(a[max_ind]<a[i])
        {
            max_ind=i;
        }
    }
    bool sorted=true;
    for(int i=1;i<a.size();i++)
    {
        if(a[i-1]>a[i])
        {
        sorted=false;
        }
    }
    if(sorted)
    {
        return 0;
    }
    else if(max_ind==a.size()-1 || min_ind==0)
    {
        return 1;
    }
    else if(max_ind==0 && min_ind==a.size()-1)
    {
        return 3;
    }
    return 2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cout<<sortArray(v,n)<<"\n";
        
    }
    return 0;
}
