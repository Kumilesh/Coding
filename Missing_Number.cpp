#include <bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long arr[N]={0};
int main()
{
    long long n;
    cin>>n;
    long long arr[n-1];
    long long num;
    for(long i=0;i<n-1;i++)
    {
        cin >>num;
        arr[num]=num;
    }
    int b;
    for(long i=1;i<=n;i++)
    {
        //cout<<arr[4];
        if(arr[i]!=i)
        {
        cout<<i;
        b=i;
        break;
        }
        
    }
    //if(b==2)
    //cout<<"2";
    
}