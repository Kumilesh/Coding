#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int i=0;
    cin>>n;
	set<string> mp;
	while(i<n){
		string s;
		cin>>s;
		mp.insert(s);
        int ind=0;
        for(auto k:mp){
            if(k==s){
                break;
            }
            ind++;
        }
        cout<<ind<<"\n";
		++i;
	}
}