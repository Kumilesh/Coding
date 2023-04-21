//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"
bool memo[1000];
bool canSum(int n,int arr[])
{
    if(n==0)
    {
        return true;
    }
    if(n<0)
    return false;
    if(memo[n]!=false)
    return true;
    for(int i=0;i<2;i++)
    {
        //cout<<arr[i];
        if(canSum(n-arr[i],arr)==true)
        {
              04kmemo[n-arr[i]]=true;
            return true;
        }
    }
    return false;
}

int main(){
    int arr[2]={7,34};
    cout<<canSum(300,arr);
    
}
