
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,m,x,y,x1,y1,cnt=0,dx=1,dy=1;cin>>n>>m>>x>>y>>x1>>y1;
	    while(1){
	        if(x==x1 or y==y1)break;
	        if(x==n)dx=-1;
	        if(y==m)dy=-1;
	        x=x+dx,y=y+dy;
	        cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
