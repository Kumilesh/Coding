//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
//#define for(u,i,j) for(int u=i;u<j;u++)
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        //cout<<(s[0]==0);
        int low=0,high=n-1;
        bool flag=true;
        int count=0;
        while(low<=high)
        {
            if(flag)
            {
                if(s[low]=='0' && s[high]=='1')
                {
                    // cout<<"1";
                    low++;
                    high--;
                   
                }
                else if(s[low]=='1' && s[high]=='0')
                {
                    // cout<<"2";
                    low++;
                    high--;
                    count++;
                    flag=0;
                }
                else if(s[low]=='0')
                {
                    // cout<<"5";
                    low++;
                }
                else if(s[high]=='1')
                {
                    // cout<<"3";
                    high--;
                }
                // else
                // {
                //     cout<<"6";
                //     low++;
                //     high--;
                // }

            }
            else
            {
                if(s[low]=='1' && s[high]=='0')
                {
                    low++;
                    high--;
                   
                }
                else if(s[low]=='0' && s[high]=='1')
                {
                    low++;
                    high--;
                    count++;
                    flag=1;
                }
                else if(s[low]=='1')
                {
                    low++;
                }
                else if(s[high]=='0')
                {
                    high--;
                }
                // else
                // {
                //     low++;
                //     high--;
                // }

            }

        }
        cout<<count<<"\n";

    }
    return 0;
}
