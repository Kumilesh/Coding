//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define for(u,i,j) for(int u=i;u<j;u++)
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
        int arr[n];
        for(i,0,n)
        {
            cin>>arr[i];
        }
       
        if(n==2)
        {
            if(arr[0]==1 && arr[1]==1)
            {
                println(0);
            }
            else if(arr[0]==1 || arr[1]==1)
            {
                println(1);
            }
            else
            {
                println(2);
            }
        }
        else
        {
            sort(arr,arr+n);
            int temp=arr[0];
            for(i,1,n)
            {
                temp=__gcd(temp,arr[i]);
            }
            int num=-1;
            if(temp!=1)
            {
                println(n);
            }
            else
            {
                temp=arr[0];
                
                int count=0;
                for(i,1,n)
                {
                    if(__gcd(temp,arr[i])==1)
                    {
                        num=arr[i];
                        break;
                    }
                    temp=__gcd(temp,arr[i]);

                }

            
            //cout<<"mnasbc"<<"\n";
            int ct1=0;
            for(i,0,n)
            {
                if(__gcd(temp,arr[i])==1)
                {
                    ct1+=1;
                    if(ct1==2)
                    {
                        break;
                    }
                }
            }
            int ct2=0;
            for(i,0,n)
            {
                if(__gcd(num,arr[i])==1)
                {
                    ct2+=1;
                    if(ct2==2)
                    {
                        break;
                    }
                }
            }
            if(ct1==1 && ct2==1)
            {
                println(2);
            }
            else if(ct1==1 || ct2==1)
            {
                println(1);
            }
            else
            {
                println(0);
            }
            }

        }
    }
}

