#include <bits/stdc++.h>
using namespace std;
int arr[26]={0};
int main()
{
    string str;
    cin>>str;
    bool flag;
    bool ans=true;
    vector<char> v1;
    int e;
    char p;
    int n=str.size();
    if(n%2==0)
    {
        flag=false;
    }
    else
    {
        flag=true;
    }
    for(int i=0;i<str.size();i++)
    {
        arr[str[i]-'A']+=1;
    }
    for(int i=0;i<26;i++)
    {
        if(flag==false)
        {
            if(arr[i]%2!=0)
            {
                cout<<"NO SOLUTION";
                ans=false;
                break;
            }
            else
            {
            for(int j=0;j<arr[i]/2;j++)
            {
                v1.push_back('A'+i);
            }
            }
        }
        else
        {
            if(arr[i]%2!=0)
            {
                flag=false;
                p='A'+i;
                e=arr[i];
            }
            else{
                for(int j=0;j<arr[i]/2;j++)
            {
                v1.push_back('A'+i);
            }

            }
        }
    }
    if(ans!=false)
    {
        if(n%2==0)
        {
            for(int j=0;j<v1.size();j++)
            {
                cout<<v1[j];
            }
            for(int j=v1.size()-1;j>=0;j--)
            {
                cout<<v1[j];
            }

        }
        else{
            for(int j=0;j<v1.size();j++)
            {
                cout<<v1[j];
            }
            for(int j=0;j<e;j++)
            {
                cout<<p;

            }
            for(int j=v1.size()-1;j>=0;j--)
            {
                cout<<v1[j];
            }

        }
    }


}