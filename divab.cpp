#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
cin>>t;
while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    int gc=__gcd(a,b);
    int lc=(a*b)/gc;
    if(gc!=1 && a>=b){
        cout<<-1<<endl;
    }
    else if(gc!=1){
        long long  ans;
        if(n%a==0){
            ans=a*(n/a);
        }
        else{
            ans=a*(n/a)+a;
        }
        while(ans%b==0){
            ans+=a;
        }
        cout<<ans<<endl;
    }
    else{
        long long ans;
        if(n%a==0){
            ans=a*(n/a);
        }
        else{
            ans=a*(n/a)+a;
        }
        while(ans%lc==0){
            ans+=a;
        }
        cout<<ans<<endl;
    }
}
}
