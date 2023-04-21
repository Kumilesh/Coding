#include <bits/stdc++.h>
using namespace std;
void permutationss(int arr[], vector<int> &ds, vector<vector<int>> &ans, bool freq[])
{
    if (ds.size()==3 )
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        if (!freq[i])
        {
            freq[i] = true;
            ds.push_back(arr[i]);
            permutationss(arr, ds, ans, freq);
            ds.pop_back();
            
            freq[i]=false;
            //permutationss(arr, ds, ans, freq);
            
        }
    }
}
int main()
{
    int arr[3] = {3, 1, 2};
    cout << "123";
    vector<int> ds;
    vector<vector<int>> ans;
    bool freq[3];
    cout << "abcd";
    permutationss(arr, ds, ans, freq);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}