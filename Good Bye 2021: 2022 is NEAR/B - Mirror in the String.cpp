#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s,temp="",temp1="",mini="";cin>>s;
	    char x=(char)127;
	    for(int i=0;i<n;i++){
	        if(s[i]<=x)
	        {temp+=s[i];
	        x=s[i];}
	        else break;
	    }
	    temp1=temp;
	    reverse(temp.begin(),temp.end());
	    if(n>1 and s[0]==s[1]){
	        mini+=s[0];
	        mini+=s[1];
	    }
	   
	    if(mini!="")
	    cout<<min(temp1+temp,mini)<<endl;
	    else  cout<<temp1+temp<<endl;
	  
	}
	return 0;
}
