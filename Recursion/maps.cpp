#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,string> m;
    m.insert({78,"Eve"});
    m.insert({99,"Bob"});
    m.insert({78,"Alice"});
    for(auto pr:m)
    cout<<pr.first<<" "<<pr.second<<"\n";
}