#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;cin>>n>>m;long long int a[n],b[m];for(int i=0;i<n;i++)cin>>a[i];
	    for(int i=0;i<m;i++)cin>>b[i];
	    sort(a,a+n);
	    long long s=0;
	    int i=n-1,j=0;
	    while(i>=0&&j<m&&a[i]-1>=j)
	    {
	        s+=b[j];
	        j++;
	        i--;
	    }
	    
	    for(int k=0;k<=i;k++)s+=b[a[k]-1];
	    cout<<s<<endl;
	    
	}
	return 0;
}
