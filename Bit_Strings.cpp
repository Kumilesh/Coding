#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a=1e9+7;
    long long sum=1;
    for(long long i=0;i<n;i++)
    {
        sum= (sum*2)% a;
        sum=sum%a;
    }
    cout <<sum % a;
}