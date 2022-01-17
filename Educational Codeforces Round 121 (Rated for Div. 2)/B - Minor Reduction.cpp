#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
	    int cnt=0;
	    for(int i=0;i<s.size()-1;i++){
	        string temp=to_string((s[i]-'0')+(s[i+1]-'0'));
	        if(temp.size()==2)cnt++;
	    }
	    int index;
	    if(cnt){
	        string temp="";
	        for(int i=s.size()-1;i>=1;i--){
	             temp=to_string((s[i]-'0')+(s[i-1]-'0'));
	             if(temp.size()==2){
	                 index=i;
	                 break;
	             }
	        }
	        for(int i=0;i<index-1;i++)cout<<s[i];
	        cout<<temp;
	        for(int i=index+1;i<s.size();i++)cout<<s[i];
	        cout<<endl;
	    }
	    else{
	        string temp="";
	        temp=to_string((s[0]-'0')+(s[1]-'0'));
	        cout<<temp;
	        for(int i=2;i<s.size();i++){
	            cout<<s[i];
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
