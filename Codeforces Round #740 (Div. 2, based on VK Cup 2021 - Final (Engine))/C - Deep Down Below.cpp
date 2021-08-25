#include<bits/stdc++.h>
using namespace std;
// cmp is used when caves have same power ,we will choose the cave with maximum monster
static bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first!=b.first)return a.first<b.first;
    else return a.second>b.second;
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<pair<int,int>>power;
	    for(int i=1;i<=n;i++){
	        int x;cin>>x;
	        vector<int>temp;
	        for(int j=1;j<=x;j++){
	            int y;cin>>y;
	            temp.push_back(y);
	        }
	        int maxi=temp[0]+1,cnt=1;
	        for(int i=1;i<x;i++){
	            maxi=max(maxi,temp[i]+1-cnt);
	            cnt++;
	        }
	        power.push_back({maxi,x});
	    }
	    sort(power.begin(),power.end(),cmp);
	    int ans=power[0].first,cur_pow=ans;
	    for(int i=0;i<power.size();i++){
	        if(power[i].first>cur_pow)ans+=power[i].first-cur_pow,cur_pow+=power[i].first-cur_pow;
	        cur_pow+=power[i].second;
	    }
	   cout<<ans<<endl;
	}
	return 0;
}
