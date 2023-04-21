#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long p=log(n)/log(5);
    long long sum=0;
    long long num;
    for(int i=1;i<=p;i++)
    {
        num=pow(5,i);
        sum+=(n/num);
    }
    cout<<sum;

}