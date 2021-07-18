
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	    int xa,ya,xb,yb,xc,yc;cin>>xa>>ya>>xb>>yb>>xc>>yc;
	    if(xa==xb){
	        if(xc==xa){
	            if((yc>=ya and yc<=yb) or(yc>=yb and yc<=ya) )
	            cout<<abs(yb-ya)+2<<endl;else cout<<abs(yb-ya)<<endl;
	        }else cout<<abs(yb-ya)<<endl;
	    }else if(ya==yb){
	        if(yc==ya){
	            if((xc>=xa and xc<=xb) or(xc>=xb and xc<=xa) )
	            cout<<abs(xb-xa)+2<<endl;else cout<<abs(xb-xa)<<endl;
	        }else cout<<abs(xb-xa)<<endl;
	    }else cout<<abs(ya-yb)+abs(xa-xb)<<endl;
	}
	return 0;
}
