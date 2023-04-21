#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,set<string>> m;
    int i,n;
    cin>>n;
    int num;
    string str;
    for(i=0;i<n;i++)
    {
        cin>>num>>str;
        m[num].insert(str);
    }
    auto c=--m.end();
    while(true){
        auto &st=(*c).second;
        int marks=(*c).first;
        for(auto &stud:st)
        {
             cout<<stud<<" "<<marks<<endl;
        }
        if(c==m.begin())break;
        c--;
    }
    
}