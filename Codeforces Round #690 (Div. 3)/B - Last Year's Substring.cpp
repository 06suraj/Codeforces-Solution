#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    string s;int n,flag=0;cin>>n;cin>>s;int f[100]={0},gap=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='2'&&s[i+1]=='0'&&s[i+2]=='2'&&s[i+3]=='0'&&(i==0||i+3==n-1))
           {
	            flag=1;
	            break;
	        }else if(s[i]=='2'&&s[i+1]=='0'&&s[i+2]=='2'&&i==0)
	        {
	            for(int j=i+3;j<n;j++)
	            {
	                if(s[j]=='0'&&j==n-1)
	                {
	                    flag=1;
	                    break;
	                }
	            }
	        }else if(s[i]=='2'&&s[i+1]=='0'&&i==0)
	        {
	            for(int j=i+2;j<n;j++)
	            {
	                if(s[j]=='2'&&s[j+1]=='0'&&j+1==n-1)
	                {
	                    flag=1;
	                    break;
	                }
	            }
	        }else if(s[i]=='2'&&i==0)
	        {
	            for(int j=i+1;j<n;j++)
	            {
	                if(s[j]=='0'&&s[j+1]=='2'&&s[j+2]=='0'&&j+2==n-1)
	                {
	                    flag=1;
	                    break;
	                }
	            }
	        }
	        
	        
	        
	    }
	   
	    if(flag)
	    cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
