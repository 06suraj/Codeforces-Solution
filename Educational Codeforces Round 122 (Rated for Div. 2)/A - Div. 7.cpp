#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    if(n%7==0)cout<<n<<endl;
	    else{
	       // for(int i=10;i<=999;i++){
	       //     if(i%7==0)cout<<i<<" ";
	       // }
	        string s="",temp="",temp1="";
	        s+=to_string(n);
	        temp+=to_string(n-n%7);
	        temp1+=to_string(n+(7-n%7));
	        int flag=0;
	        for(int i=0;i<s.size()-1;i++){
	            if(s[i]!=temp[i])flag=1;
	        }
	        if(flag)cout<<temp1<<endl;
	        else cout<<temp<<endl;
	    }
	}
	return 0;
}
