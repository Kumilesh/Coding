#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void restart(){
	 int n,m;
	 cin >> n >> m;
	 pair<int,int>a[n][m];
	 for(int i=0;i<n;i++){
	 	 for(int j=0;j<m;j++){
	 	 	 int x;
	 	 	 cin >> x;
	 	 	 a[i][j]={x,x};
	 	 }
	 }
	 for(int i=1;i<n;i++){
	 	 a[i][0].first+=a[i-1][0].first;
	 	 a[i][0].second+=a[i-1][0].second;
	 }
	 for(int i=1;i<m;i++){
	 	 a[0][i].first+=a[0][i-1].first;
	 	 a[0][i].second+=a[0][i-1].second;
	 }
 
	 for(int i=1;i<n;i++){
	 	 for(int j=1;j<m;j++){
	 	 	  pair<int,int>temp;
	 	 	  temp.first=min(a[i-1][j].first,a[i][j-1].first);
	 	 	  temp.second=max(a[i-1][j].second,a[i][j-1].second);
	 	 	  temp.first+=a[i][j].first;
	 	 	  temp.second+=a[i][j].second;
	 	 	  a[i][j]=temp;
	 	 }
	 } 
	 if(a[n-1][m-1].first<=0 and a[n-1][m-1].second>=0 and (n+m-1)%2==0){
	 	cout<<"YES\n";
	 }
	 else{
	 	cout<<"NO\n";
	 }
 
}
 
 
int main(){
	#ifndef ONLINE_JUDGE
 
freopen("input.txt", "r", stdin);
freopen("error.txt","w",stdout);
freopen("output.txt", "w", stdout);
 
#endif // ONLINE_JUDGE
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
while(t--){
	restart();
}
 
 return 0;
}