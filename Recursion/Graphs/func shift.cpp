#include<bits/stdc++.h>
using namespace std;
int func(int k)
{
    int count=0;
    while((k&1)==0)
    {
        cout<<k;
        k=k>>1;
        count+=1;
    }
    return count;
}
int main()
{
    cout<<func(6);
}