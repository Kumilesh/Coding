//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            for(int k=1;k<=5;k++)
            {
                 for(int l=1;l<=5;l++)
                {
                    for(int m=1;m<=5;m++)
                        {
                            if(abs((i-1)) xor abs((j-2)) xor abs((k-3)) xor abs((l-4)) xor abs((m-5)))
                            {
                                if(i!=1 && j!=2 && k!=3 && l!=4 && m!=5)
                                cout<<i<<j<<k<<l<<m<<endl;;
                            }
                    
            
                        }

            
                }

        }
    }
}
}
