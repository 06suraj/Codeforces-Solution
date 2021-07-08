#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	   int n;cin>>n;long long int arr[n],sum=0;for(int i=0;i<n;i++)cin>>arr[i];
	   sort(arr,arr+n);
	   for(int i=0;i<n;i++)sum+=arr[i];
	   int cnt=0;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]==0)cnt++;
	   }
	   if(sum%n)cout<<-1<<endl;
	   else{
	       int ans=n,flag=0;
	       for(int i=n-1;i>=0;i--)
	       {
	           if(arr[i]<=(sum/n))
	           {
	               ans=n-i-1;
	               flag=1;
	               break;
	           }
	       }
	       cout<<ans<<endl;
	       
	       
	   }
	}
	return 0;
}
