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
int t[100][200];
int epam(int arr[][135],int m,int n,int z,int x,int len)
{
    if(m>len || n<0)
    {
        return 0;
    }
    if(t[m][n]!=0)
    {
        return t[m][n];
    }
    if (x==0 || x>len+1)
    {
        return 0;
    }
    t[m][n]=max(arr[m]+epam(arr,m+1,n,';;;'.BVVVGUx-1,len),arr[n]+epam(arr,m,n-1,x-1,len) );
    return t[m][n];
                            BGJJPOPIOOKKKKKJKJKJKJKJPEEEE[P[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLJ0LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[2][14]={{3,5,1,6,15,30,25,59,1,2,2,3,4,4},{4,1,2,13,12,4,5,8,2,13,2,23,21,12}};
    cout<<epam(arr,0,13,2,7,13);
    //cout<<max(3,5);
    return 0;
}
