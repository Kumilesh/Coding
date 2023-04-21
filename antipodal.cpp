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

bool is_collinear(pair<int,int> p1,pair<int,int> p2,pair<int,int> p3)
{
    int x1=p1.first;
    int x2=p2.first;
    int x3=p3.first;
    int y1=p1.second;
    int y2=p2.second;
    int y3=p3.second;
    int area=x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    //cout<<area;
    if(area==0)
    return true;
    else 
    return false;
}
bool is_antipodal(pair<int,int> p1,pair<int,int> p2,pair<int,int> p3)
{
    int x1=p1.first;
    int x2=p2.first;
    int x3=p3.first;
    int y1=p1.second;
    int y2=p2.second;
    int y3=p3.second;
    int d1=abs(x2-x1)+abs(y2-y1);
    int d2=abs(x3-x1)+abs(y3-y1);
    //cout<<"d1d2"<<d1<<d2<<"\n";
    if(d1>=d2)
    {
        double x4=(x1+x2)/2;
        double y4=(y1+y2)/2;
        double d3=abs(x3-x4)+abs(y3-y4);
        //double x=d1/2;
        //cout<<x<<d3;
        if(d3*2==d2)
        return true;
    }
    if(d1<d2)
    {
        double x4=(x3+x1)/2;
        double y4=(y1+y3)/2;
        double d3=abs(x1-x2)+abs(y1-y2);
        //int x=d2/2;
        //cout<<x<<d3;
        if(d3*2==d2)
        return true;
    }
    return false;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int ,int>> vp;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            //cout<<a<<b;
            vp.push_back(make_pair(a,b));
        }
        int ct=0;
        for(int i=0;i<n-2;i++)
        {
            //cout<<i;
            for(int j=i+1;j<n-1;j++)
            {
                //cout<<j;
                for(int k=j+1;k<n;k++)
                {
                    //cout<<k;
                    if(!is_collinear(vp[i],vp[j],vp[k]) && is_antipodal(vp[i],vp[j],vp[k]))
                    {
                        ct+=1;
                    }
                    //cout<<"\n";
                }
             }
        }
        cout<<ct;

        
    }
    return 0;
}
