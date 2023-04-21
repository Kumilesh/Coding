#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long num;
        cin>>num;
        if(num%4==3 or num%4==2)
        {
            cout<<3<<endl;;
        }
        else if(num%4==1)
        {
            long long b;
            if((num-1)%2==0)
            {
                b=(3^(num-1));
            }
            else
            {
                b=( 3&(num-1));
            }
            if(num%2==0)
            {
                cout<< (b^num)<<endl;;
            }
            else
            {
                cout<<( b&num)<<endl;;
            }
        }
        else 
        {
            if(num%2==0)
            {
                cout<< (3^num)<<endl;;
            }
            else
            {
                cout<<( 3&num)<<endl;;
            }
        }
    }
}