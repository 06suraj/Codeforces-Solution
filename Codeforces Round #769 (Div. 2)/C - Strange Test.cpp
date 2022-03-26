#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    int ans=b-a;//initialise
	    for(int na=a;na<=b;na++){
	        int nb=0;
	        for(int i=20;i>=0;i--){ //greedily try to minimse (na|nb)
	       // while ensuring that nb>=b
	       if((na&(1<<i))){ //i th bit is set or not in na
	           if(!(b&(1<<i))){//i th bit is set or not in nb
	               nb+=(1<<i);// this makes nb>=b and also minimises(na|nb)
	               break;
	           }else nb+=(1<<i); // then eitherways  (na|nb) will remain same and nb<=b
	       }else{ // ith bit is not set
	           if(b&(1<<i))nb+=(1<<i);
	           else nb+=0;
	       }
	            
	     }
	        ans=min(ans,na+(na|nb)+1-a-b);
	  }
	  cout<<ans<<endl;
	}
	return 0;
}
