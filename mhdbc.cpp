#include<bits/stdc++.h>
using namespace std;
int solve(int A,vector<int> &B,int C){
    sort(B.begin(),B.end(),greater<int>());
    vector<int> d,e;
    int sum=0;
    for(int i=0;i<A;i++)
    {
        if(B[i]>=C)d.push_back(B[i]);
    sum+=B[i];
    }
    int minSum=0;
    int k=B.size();
    for(int i=0;i<k;i++){
        minSum+=B[i];
        sum-=minSum;
        if(minSum>sum)return i+1;
    }
    return 0;

    
}
int main()
{
    vector<int> B;
    int A=10;
    B.push_back(2);
    B.push_back(3);
    B.push_back(5);
    B.push_back(1);
    B.push_back(4);
    B.push_back(6);
    B.push_back(7);
    B.push_back(8);
    B.push_back(9);
    B.push_back(10);
    int C=9;
    cout<<solve(A,B,C);

}