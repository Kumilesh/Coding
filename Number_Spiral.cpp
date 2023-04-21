#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long y,x;
    for(int i=0;i<t;i++)
    {
        cin>>y>>x;
        long long m=max(y,x);
        if(m%2==0)
        {
            if(m==y)
            cout<<(m-1)*(m-1)+y+(y-x)<<"\n";
            else 
            cout<<(m-1)*(m-1)+y<<"\n";
        }
        else
        {
            if(m==y)
            cout<<(m-1)*(m-1)+x<<"\n";
            else
            cout<<(m-1)*(m-1)+x+(x-y)<<"\n";


        }
        
    }
}