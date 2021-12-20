#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int w,h;cin>>w>>h;
	    int k,k1,k2,k3;
	    cin>>k;
	   // long long arr[200000];
	    long long x[2];for(int i=0;i<k;i++){
	        int e;
	        if(i==0)cin>>x[0];
	        else if(i==k-1)cin>>x[1];
	        else cin>>e;
	    }
	    cin>>k1;
	    long long x1[2];for(int i=0;i<k1;i++){
	        int e;
	        if(i==0)cin>>x1[0];
	        else if(i==k1-1)cin>>x1[1];
	        else cin>>e;
	    }
	    cin>>k2;
	    long long y[2];for(int i=0;i<k2;i++){
	        int e;
	        if(i==0)cin>>y[0];
	        else if(i==k2-1)cin>>y[1];
	        else cin>>e;
	    }
	    cin>>k3;
	    long long y1[2];for(int i=0;i<k3;i++){
	        int e;
	        if(i==0)cin>>y1[0];
	        else if(i==k3-1)cin>>y1[1];
	        else cin>>e;
	    }
	    long long area,hori,verti;
	   // cout<<x1[0]<<" "<<y1[0]<<endl;
	    hori=max((x[1]-x[0])*h,(x1[1]-x1[0])*h);
	    verti=max((y[1]-y[0])*w,(y1[1]-y1[0])*w);
	    cout<<max(hori,verti)<<endl;
	}
	return 0;
}
