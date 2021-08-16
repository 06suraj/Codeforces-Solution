#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s;cin>>s;
	    char prev='a';
	    for(int i=0;i<n;i++){
	        if(s[i]=='?'){
	            if(prev=='R')
	            s[i]='B',prev='B';
	            else if(prev=='B')
	            s[i]='R',prev='R';
	            else prev='?';
	        }else {
	            if(prev=='?'){
	                prev=s[i];
	                for(int j=i-1;j>=0 and s[j]=='?';j--){
	                    if(prev=='R')
        	            s[j]='B',prev='B';
        	            else if(prev=='B')
        	            s[j]='R',prev='R';
	                }
	                
	            }
	            prev=s[i];
	        }
	    }
	    if(prev=='?'){
	        prev='B';
	        for(int i=0;i<n;i++){
	            if(prev=='B')s[i]='R',prev='R';
	            else s[i]='B',prev='B';
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
