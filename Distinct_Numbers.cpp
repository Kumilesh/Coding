#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
    s.insert(num);
}
cout<<s.size();
}