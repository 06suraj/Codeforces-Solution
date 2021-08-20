#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int k,c=0,i,x,temp=1;cin>>k;
	    for(i=1;i<k;i=temp*temp+1,temp++)c++;
	       if(i>k)c--;
	   x=0;
	   i=c*c+1;
	   for(;i<k and x<c;i++,x++);
	    //cout<<c;
	   if(i==k)
	       cout<<x+1<<" "<<c+1<<endl;
	   else{
	       int r=x;
	       //cout<<r<<endl;
	       for(;i<k and x>=0;i++,x--);
	       cout<<r+1<<" "<<x+1<<endl;
	   }
	}
	return 0;
}
