#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool flag=true;
	    int sum=0,count=0;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        if(a==0){
	            flag=false;
	            sum+=count*(count+1)/2;
	            count=0;
	        }
	        else{
	            count+=1;
	        }
	    }
	    if(count%2==0)
	    {
	    sum+=(count/2)*(count+1);
	    }
	    else{
	        sum+=(count)*(count+1)/2;
	    }
	    cout<<sum<<"\n";
	}
}nxx