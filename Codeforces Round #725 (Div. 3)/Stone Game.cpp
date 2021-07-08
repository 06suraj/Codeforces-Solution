#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    int x,y,z,d,x1,y1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==*max_element(arr,arr+n))
	        x=i;
	        else if(arr[i]==*min_element(arr,arr+n))
	        y=i;
	    }
	    d=min(x,y)+1;
	    z=n-(max(x,y));
	    x1=max(x,y)+1;
	    y1=min(x,y);
	    y1=n-y1;
	   x1=min(y1,x1);
	   //cout<<z;
	   cout<<min(x1,d+z)<<endl;
	}
	return 0;
}
