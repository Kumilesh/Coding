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
map<pair<int,int>,int> m;
int gridpath(int x,int y)
{
    if(x==1 && y==1)
    {
        return 1;
    }
    if(x<=0 || y<=0)
    {
        return 0;
    }
    if(m.find(make_pair(x,y))!=m.end())
    {
        return m[make_pair(x,y)];
    }
    m[make_pair(x,y)]= gridpath(x-1,y)+gridpath(x,y-1);
    return gridpath(x,y);
}

int main(){
    cout<<gridpath(3,3);
}
