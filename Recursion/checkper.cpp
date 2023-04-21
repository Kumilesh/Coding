#include <bits/stdc++.h>
using namespace std;
int k=0;
void cp(int num)
{
    if(num)
    {
        cout<<num<<" "<<k+1<<"\n";
        k++;
        return;
    }
    for(int i=0;i<20;i++)
    {
        
        num++;
        cp(num);
        num--;
        
    }
}
int main()
{
 cp(0);
}