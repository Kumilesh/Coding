#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<int> v1,v2;
    long long k=n*(n+1)/2;
    
    if(k%2==0)
    {
        cout<<"YES"<<"\n";
        k=k/2;
        long long sum=0;
        for(int i=n;i>0;i--)
        {
            if(sum+i<=k)
            {
                sum+=i;
                v1.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        }
        cout<<v1.size()<<"\n";
        for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
        cout<<"\n";
        cout<<v2.size()<<"\n";
        for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";

    }
    else
    {
        cout<<"NO";
    }
    
}