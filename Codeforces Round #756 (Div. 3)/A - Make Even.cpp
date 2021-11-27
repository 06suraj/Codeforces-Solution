#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
	    if((s[s.size()-1]-'0')%2==0)cout<<0<<endl;
	    else{
	        int pos=-1;
	        for(int i=0;i<s.size();i++){
	            if((s[i]-'0')%2==0){
	                pos=i;
	                break;
	            }
	        }
	        if(pos==-1)cout<<-1<<endl;
	        else if(pos==0)cout<<1<<endl;
	        else cout<<2<<endl;
	        
	    }
	}
	return 0;
}
