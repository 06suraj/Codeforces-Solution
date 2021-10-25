#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
	    int maxi=INT_MAX,flag=0;;
	    for(char c:s)maxi=min(maxi,(int)c);
	    cout<<(char)maxi<<" ";
	    for(char c:s){
	        if(c!=maxi)cout<<c;
	        else {
	            if(flag)cout<<c;
	            else flag=1;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
