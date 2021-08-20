#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n-1;i++)
	    {
	        int ma=max(arr[i],arr[i+1]);
	        int mi=min(arr[i],arr[i+1]);
	        if(ma>2*mi)
	        {
	            while(ma>2*mi)
	            {
	                if(ma%2)
	                ma=ma/2+1;
	                else ma=ma/2;
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
