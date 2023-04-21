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
bool arr1[100];
bool count_partition(int arr[],int parti,int len)
{
    if(parti==0)
    {
        //cout<<parti;
        return true;
    }
    return  count_partition(arr,parti-arr[len-1],len-1);
    return count_partition(arr,parti,len-1);
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int parti=sum/2;
    cout<<parti;
    if(sum%2==0)
    {
    cout<<"ab"<<count_partition(arr,parti,n);
    }
    else
    {
        cout<<false;
    }

}
