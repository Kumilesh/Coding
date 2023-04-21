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
    int arr[10]={2,3,5,7,11,13,17,23,29,31};

    int t ;
    cin >> t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int z=x xor y;
        int a,b,c;
        for(int i=1;i<100;i++)
        {
            if(i!=x && i!=y &&i!=z)
            {
                //int a;
                a=i;
                 b=a xor x;
                if(b!=x && b!=y && b!=z )
                {
                    c=a xor y;
                        if(c!=x && c!=y && c!=z)
                        {
                            break;
                        }
                }
            }
        }
        int arr[]={a,b,c};
        sort(arr,arr+3);
        for(int i=0;i<3;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}
