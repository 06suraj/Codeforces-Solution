
#include<bits/stdc++.h>
using namespace std;
 
// another easy one just meshed up
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
	    int ans=INT_MAX;
	    for(long long int i=1;i<=1e18;i=i*2){
	        string temp=to_string(i);
	        int i1=0,j=0,cnt=0;
	        while(i1<s.size() and j<temp.size()){
	            if(s[i1]==temp[j])
	            i1++,j++;
	            else i1++,cnt++;
	        }
	        ans=min(ans,cnt+(int)temp.size()-j+(int)s.size()-i1);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
