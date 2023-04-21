#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const int N = 20;
int arr[N];
int mn = 1e9;
vector<int> part1(1, 0), part2(1, 0);
 
void getMin(int n)
{
    // cout << "part1\t";
    // for (int i : part1)
    //     cout << i << " ";
    // cout << "\n";
    // cout << "part2\t";
    // for (int i : part2)
    //     cout << i << " ";
    // cout << "\n";
    if (n < -1)
    {
        ll sum1 = accumulate(part1.begin(), part1.end(), 0);
        ll sum2 = accumulate(part2.begin(), part2.end(), 0);
        if (abs(sum1 - sum2) < mn)
            mn = abs(sum1 - sum2);
        return;
    }
    part1.push_back(arr[n]);
    getMin(n - 1);
    part1.pop_back();
    part2.push_back(arr[n]);
    getMin(n-1);
    part2.pop_back();
    
}
 
int main()
{
    
 
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        getMin(n - 1);
        cout << mn;
    }
    return 0;
}