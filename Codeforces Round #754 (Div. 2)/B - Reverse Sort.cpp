#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;string s;cin>>s;
	    vector<int>one,zero,ans,ans1;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1')one.push_back(i);
	        else zero.push_back(i);
	    }
	    reverse(zero.begin(),zero.end());
	    int i=0,j=0;
	    while(i<one.size() and j<zero.size()){
	        if(one[i]<zero[j]){ans.push_back(one[i]);ans1.push_back(zero[j]);i++,j++;}
	        else break;
	    }
	    if(ans.empty())cout<<0<<endl;
	    else {
	        cout<<1<<endl;
	        reverse(ans1.begin(),ans1.end());
	        cout<<ans.size()+ans1.size()<<" ";
	        for(int i:ans)cout<<i+1<<" ";
	        for(int i:ans1)cout<<i+1<<" ";
	        cout<<endl;
	    }
	    
	}
	return 0;
}
