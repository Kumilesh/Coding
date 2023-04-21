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
long long memo[10001]={0};


int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(memo[n]!=0)
    return memo[n];
    memo[n]=fib(n-1)+fib(n-2);
    
    return memo[n];
}
int main(){
    memo[100]=345;
    for(int i=0;i<=100;i++)
    {
        //memo[100]=345;
        memo[100]=345;
    cout<<fib(i)<<"\n";
    }
    
}
