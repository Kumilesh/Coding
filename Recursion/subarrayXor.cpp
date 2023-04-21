#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int ct=0;
        int b=-1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='1' && a[i+1]=='0')
            {
            a[i]='0';
            a[i+1]='1';
            b=i;
            break;
            }
        }
        int c=b-1;
        int d=b+2;
        while(a[c]=='1' && a[d]=='0' && c>=0 && d<n)
        {
            a[c]='0';
            a[d]='1';
            c--;
            d++;
        }
        cout<<a<<"\n";
        
        }
    }
