#include<bits/stdc++.h>
using namespace std;
int main()
{
 multiset<int> e;
 for(int i=0;i<4;i++)
 {
     e.insert(0);
 } 
 e.insert(5);  
 for(auto it=e.begin();it!=e.end();++it)
 {
     cout<<*it<<" ";
 } 
 auto it=e.upper_bound(5);
 cout<<*it;

}