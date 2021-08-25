#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    long long w,h,n,count=1,count1=1;;cin>>w>>h>>n;
	    while(w%2==0)
	    {
	        w=w/2;
	        count=count*2;
	    }
	    while(h%2==0)
	    {
	        h=h/2;
	        count1=count1*2;
	    }
	    if((count*count1)>=n)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
