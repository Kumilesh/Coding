#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long long sub;
    long long f;
    long long s;
    long count=0;
    cin>>f;
    for(long i=1;i<n;i++)
    {
        cin>>s;
        if(s<f)
        {
        count+=(f-s);
        s+=(f-s);
        }
        f=s;
    }
    cout<<count;

}