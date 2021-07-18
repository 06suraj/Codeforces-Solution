#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	   char f[26]={0};int flag=0;
	    for(int i=0;i<s.size();i++)f[s[i]-'a']++;
	    for(int i=0;i<s.size();i++){
	        if(f[i]==0){flag=1;}
	        else if(f[i]>1){flag=1;}
	    }
	    
	    if(flag)cout<<"NO\n";
	    else{
	        int i=0,j=s.size()-1,cnt=s.size()-1;
	        while(i<j and cnt<s.size() ){
	            if(s[i]==('a'+cnt)){i++;cnt--;}
	            else if(s[j]==('a'+cnt)){
	                j--;
	                cnt--;
	            }else {
	                flag=1;
	                //cout<<i<<" "<<j;
	                break;
	            }
	        }
	        
	        if(flag)cout<<"NO\n";
	        else cout<<"YES\n";
	    }
	    
	}
	return 0;
}

