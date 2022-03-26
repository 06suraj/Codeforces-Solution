#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    long long hc,dc,hm,dm;
	    int k,w,a,flag=0;
	    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
	    for(int i=0;i<=k;i++){
	        long long htemp,dtemp;
	        dtemp=i*w+dc;
	        htemp=(k-i)*a+hc;
	        long long x1,x2;
	        x1=hm/dtemp;
	        if(hm%dtemp)x1++;
	        x2=htemp/dm;
	        if(htemp%dm)x2++;
	        if(x1<=x2)flag=1;
	    }
	    if(flag)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
