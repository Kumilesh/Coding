#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=1;
        unordered_map<int,int> mp,mp1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            mp[s[i]]++;
            else
            mp1[s[i]]++;
        }
        bool ok=true;
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(mp[s[i]]!=mp1[s[i]])
                ok=false;
            }
        }
        else
        {
            for(int i=0;i<n;i+=2)
            {
                if(mp[s[i]]%2!=0)
                count--;
                if(count<0)
                ok=false;
            }
            for(int i=1;i<n;i+=2)
            {
                if(mp[s[i]]%2!=0)
                ok=false;
            }
        }
        
        if(ok)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}