#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	   set<pair<int,int>>p,check;
	   map<pair<int,int>,int>ma;
	   for(int i=0;i<n;i++){
	       int l,r;cin>>l>>r;
	       p.insert({l,r});
	   }
	  for(auto &i:p){
	   //   cout<<i.first<<" "<<i.second<<endl;
	      for(int i1=i.first;i1<=i.second;i1++){
	          if(i1!=i.first and p.find({i.first,i1-1})!=p.end() and check.find({i.first,i1-1})==check.end()){
	              ma[{i.first,i.second}]=i1;
	              check.insert({i.first,i1-1});
	              break;
	          }
	          if(i1!=i.second and p.find({i1+1,i.second})!=p.end() and check.find({i1+1,i.second})==check.end()){
	              ma[{i.first,i.second}]=i1;
	           //   p.insert({i1,i.second});
	              check.insert({i1+1,i.second});
	              break;
	          }
	         
	      }
	      
	  }
	  for(pair<int,int>i:p){
	      cout<<i.first<<" "<<i.second<<" "<<(ma[{i.first,i.second}]==0?i.first:ma[{i.first,i.second}])<<endl;
	  }
	  cout<<endl;
	    
	}
	return 0;
}
