#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int react(string a)
{
    if(a.size()==1)
     return a[0]-'A'+10;
    else
    return (a[1]-'a'+37)*((a[0]-'A'+10)+1)-1;

}
int main()
{
    //cout<<gcd(12,13);
    //cout<<react("He");
    string inp;
    string temp="";
    vector<string> v1;
    getline(cin,inp);
    int n=0;
    for(char i:inp)
    {
        if(i==' ')
        {
        v1.push_back(temp);
        temp="";
        n+=1;
        }
        else
        {
            temp+=i;
        }
    }
    v1.push_back(temp);
    /*for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }*/
    vector<int> v2;
    int mini=0;
    for(int i=0;i<v1.size();i++)
    {
        v2.push_back(react(v1[i]));
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int p=gcd(v2[i],v2[j]);
            if(p>mini)
            {
                mini=p;
            }

        }
    }
    cout<<mini;

}