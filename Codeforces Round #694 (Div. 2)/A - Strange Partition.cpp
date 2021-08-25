
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;long long x,arr[n];cin>>x;for(int i=0;i<n;i++)cin>>arr[i];
	    long long m=0,ma=0;
	    for(int i=0;i<n;i++)
	    m+=arr[i];
	    if(m%x)
	    m=m/x+1;
	    else m=m/x;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%x)
	        ma+=arr[i]/x+1;
	        else ma+=arr[i]/x;
	    }
	    cout<<m<<" "<<ma<<endl;
	}
	return 0;
}
