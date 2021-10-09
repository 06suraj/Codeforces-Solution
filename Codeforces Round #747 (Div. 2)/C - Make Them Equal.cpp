#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	   char x;cin>>x;
	   string s;cin>>s;
	    int even=0,odd=0;
	    for(int i=0;i<n;i++){
	       // cout<<s[i];
	        if(s[i]!=x){
	            if(i%2)even++;
	            else odd++;
	        }
	    }
	    int ans=-1,flag=0;
	  for(int i=s.size()-1;i>=0;i--){
	      if(s[i]==x){
	          if((i+1)*2>s.size())
	          {flag=1;
	          ans=i+1;
	          break;}
	         
	      }
	  }
	  if(ans!=-1 and (even or odd))cout<<1<<endl<<ans<<endl;
	  else{
	    if(even and odd)cout<<2<<endl<<2<<" "<<(n%2?n:n-1)<<endl;
	    else if(even)cout<<1<<endl<<(n%2?n:n-1)<<endl;
	    else if(odd)cout<<1<<endl<<2<<endl;
	    else cout<<0<<endl;
	}}
	return 0;
}
