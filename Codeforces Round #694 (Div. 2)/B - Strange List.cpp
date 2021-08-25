#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;long long x,arr[n],count=0,temp,ma=LLONG_MAX,sum=0;cin>>x;for(int i=0;i<n;i++)cin>>arr[i];
	    int pos=0;
	    for(int i=0;i<n;i++)
	    {
	        temp=arr[i];
	        count=0;
	        while(temp%x==0)
	        {
	            count++;
	            temp=temp/x;
	        }
	        count++;
	        
	            if(count<ma)
	            {
	                ma=count;
	                pos=i;
	            }
	    }
	    for(int i=0;i<pos;i++)
	    sum+=arr[i]*(ma+1);
	    for(int i=pos;i<n;i++)
	    sum+=arr[i]*ma;
	    cout<<sum<<endl;
	    
	}
	return 0;
}
