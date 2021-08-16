
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;string s,s1;cin>>s>>s1;
	     int total=0,cnt=0,prev=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0' and s1[i]=='1'){cnt++,s1[i]='0';}
	    }
	       for(int i=0;i<n;i++){
	       if(s1[i]=='1')
	       {
	           if(i==0 and s[i+1]=='1'){cnt++,s[i+1]='0';}
	           else if(i==n-1 and s[i-1]=='1'){cnt++,s[i-1]='0';}
	           else if(s[i-1]=='1'){cnt++,s[i-1]='0';}
	           else if(s[i+1]=='1'){cnt++,s[i+1]='0';}
	       }
	           
	       }
	       cout<<cnt<<endl;
	  
	    }
	    
	
	return 0;
}
