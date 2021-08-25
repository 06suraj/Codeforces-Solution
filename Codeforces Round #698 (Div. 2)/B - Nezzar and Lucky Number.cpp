#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d,rem,flag=0;cin>>n>>d;
	    long long arr[n],di;for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n;i++)
	    {
	        flag=0;
	        di=arr[i]/d;
	        rem=arr[i]%d;
	        if(di>=10)
	        {
	            cout<<"YES\n";
	        }else
	        {
	            for(int j=1;j<=di;j++)
	            {
	                if((d*j+rem)%10==d)
	                {
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag)cout<<"YES\n";
	            else cout<<"NO\n";
	        }
	    }
	}
	return 0;
}
