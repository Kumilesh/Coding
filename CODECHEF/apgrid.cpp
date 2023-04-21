#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        for(ll a=1; a*a<=n; a++){
            for(ll lcm=a; lcm*lcm<=n; lcm+=a){
                ll lcm_sq=lcm*lcm;
                ll a_sq=a*a;
                ll num=(n-lcm_sq-a_sq)*lcm_sq;
                if(num<=0){
                    continue;
                }
                ll den=a_sq+lcm_sq;
                if(num%den!=0){
                    continue;
                }
                ll b_sq=num/den;
                ll b=(ll)sqrt(b_sq);
                if(b*b!=b_sq){
                    continue;
                }
                ll gcd_sq=gcd(a, b)*gcd(a, b);
                if(a_sq + b_sq + gcd_sq + lcm_sq==n){
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}