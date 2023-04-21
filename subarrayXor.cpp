#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll M = 998244353;
const int N = (2 * 1e5) + 10;
int arr[N];
void getSubStrings(vector<vector<char>> &v, string &s, int n)
{
    for (int i = 0; i < n; i++)
    {
        vector<char> sub;
        sub.push_back(s[i]);
        v.push_back(sub);
        for (int j = i + 1; j < n; j++)
        {
            sub.push_back(s[j]);
            v.push_back(sub);
        }
    }
}

int convert(vector<char> sub)
{
    int sz = sub.size() - 1;
    ll dec = 0;
    for (auto i : sub)
    {
        i = int(i) - 48;
        dec += (i * arr[sz]) % M;
        dec %= M;
        sz--;
    }
    return dec;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[0] = 1;
    arr[1] = 2;

    for (int i = 2; i < N; i++)
    {
        arr[i] = ((arr[i - 1] % M) * 2) % M;
    }

    // for(int i = 0; i < 50 ; i++){
    //     cout << arr[i] << " " << pow(2LL,i) << "\n";
    // }

    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> v;

        int n;
        cin >> n;
        string s;
        cin >> s;
        n = s.length();
        
        getSubStrings(v, s, n);
        vector<int> dec;
        

        // cout << v.size() << "\n";

        for (auto i : v)
        {
            dec.push_back(convert(i));
            // cout << convert(i) << " ";
        }
        ll sum = dec[0];

        for (int i = 1; i < dec.size() ; i++)
        {
            sum = sum^dec[i];
            sum %= M;
        }
        cout << sum << "\n";
    }

   
    return 0;
}