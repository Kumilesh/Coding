#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    long count,maxcount;
    maxcount=0;
   
    for(long i=1;i<n.size();i++)
    {
        if(n[i]==n[i-1])
        {
            count+=1;
            //cout<<count;
            if(count>maxcount)
            {
            maxcount=count;
            }
        }
        else
        {
            if(count>maxcount)
            {
            maxcount=count;
            }
            count=0;
        }
        
    }
    cout<<maxcount+1;
}