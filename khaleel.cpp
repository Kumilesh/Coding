#include<bits/stdc++.h>
using namespace std;

vector<int> countTeams(vector<int>rating,vector<vector<int>>queries)
{
    vector<int> ans;   
    for(auto pair: queries){
        map<int,int> mp;
        for(int i=pair[0];i<=pair[1];i++){
            mp[rating[i-1]]++;
            // cout<<rating[i]<<"\n";
        }
        int cnt=0;
        for(auto val:mp){
            cnt+=(val.second)/2;
        }
        ans.push_back(cnt);
    }
    return ans;

}
int main()
{
    vector<int> rating{2,3,4,2};
    vector<vector<int>> queries{{1,4},{3,4}};
    vector<int> ans=countTeams(rating,queries);
    for(auto num:ans)
    {
        cout<<num<<"\n";
    }

}