#include<bits/stdc++.h>
using namespace std;
void IntsLessThanOrEqualToThreshold(vector<int> userValues,int upperThreshold,vector<int> &resValues)
{
    for(int num:userValues)
    {
        if(num<=upperThreshold)
        {
            resValues.push_back(num);
        }
    }
    for(int out:resValues)
    {
        cout<<out<<" ";
    }

}
void GetUserValues(vector<int> &userValues,int numValues)
{
    int threshold;
    cin>>threshold;
    vector<int> resValues;
    IntsLessThanOrEqualToThreshold(userValues,threshold,resValues);

}

int main()
{
    vector<int> userValues;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int inp;
        cin>>inp;
        userValues.push_back(inp);
    }
    GetUserValues(userValues,n);


}