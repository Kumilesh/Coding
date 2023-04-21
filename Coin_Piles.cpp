#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if((x+y)%3==0)
        {
            int maxi,mini;
            maxi=max(x,y);
            mini=min(x,y);
            if(mini<maxi/2)
            {
                cout<<"NO"<<"\n";
            }
            else{
                cout<<"YES"<<"\n";
            }
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}