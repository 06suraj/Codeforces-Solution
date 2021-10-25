#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,ans=INT_MAX;cin>>n;
	    string s;cin>>s;
	    int f[26]={0};
	    for(char i:s)f[i-'a']++;
	    for(int i=0;i<26;i++){
	        if(f[i]){
	            int i1=0,j=s.size()-1,cnt=0;
	            while(i1<=j){
	                if(s[i1]==s[j])i1++,j--;
	                else{
	                    if(s[i1]-'a'==i)i1++,cnt++;
	                    else if(s[j]-'a'==i)j--,cnt++;
	                    else break;
	                }
	            }
	            if(i1>=j)ans=min(ans,cnt);
	        }
	    }
	    if(ans==INT_MAX)ans=-1;
	    cout<<ans<<endl;
	}
	return 0;
}
