#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    if(a>b)swap(a,b);
	    if(a==1)cout<<1<<endl;
	    else if(a==0)cout<<0<<endl;
	    else{
	    int x=b/3,y=min(x,a),x1=a/2,y1=b/2;
	    x=min(x,y),x1=min(x1,y1);
	    cout<<max(x,x1)<<endl;}
	}
	return 0;
}
