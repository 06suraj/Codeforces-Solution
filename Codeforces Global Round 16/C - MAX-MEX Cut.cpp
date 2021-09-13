#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,cnt=0,ans=0,cnt1=0,cnt2=0;cin>>n;string s,s1;cin>>s>>s1;
	    bool vis[n];
	    memset(vis,0,sizeof(vis));
	    for(int i=0;i<n;i++){
	        if((s[i]-'0'+s1[i]-'0')==1){
	           // cout<<i<<" ";
	           cnt+=2;
	        }else if((s[i]-'0'+s1[i]-'0')==2){
	            if(i>0 and i<n){
	                if(s[i-1]-'0'+s1[i-1]-'0'==0 and vis[i-1]==0)cnt1++,cnt+=2,vis[i-1]=1;
	                else if(s[i+1]-'0'+s1[i+1]-'0'==0 and vis[i+1]==0)cnt1++,cnt+=2,vis[i+1]=1;
	            }
	            else if(i>0){
	                 if(s[i-1]-'0'+s1[i-1]-'0'==0 and vis[i-1]==0)cnt1++,cnt+=2,vis[i-1]=1;
	            }else if(i<n){
	                if(s[i+1]-'0'+s1[i+1]-'0'==0 and vis[i+1]==0)cnt1++,cnt+=2,vis[i+1]=1;
	            }
	        }else {
	            cnt2++;
	        }
	    }
	    
	    cout<<cnt+cnt2-cnt1<<endl;
	}
	return 0;
}
