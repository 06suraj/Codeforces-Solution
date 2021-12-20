#include<bits/stdc++.h>
using namespace std;
//very nice question
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int q;cin>>q;
	map<int,int>first,second;
	map<int,int>ma;
	vector<int>info[q],ans;
	for(int i=0;i<q;i++){
	    int x,y;cin>>x;
	    info[i].push_back(x);
	    if(x==1){cin>>y;ma[y]=y;info[i].push_back(y);}
	    else{
	        int z;cin>>y>>z;
	        info[i].push_back(y);
	        info[i].push_back(z);
	    }
	}
	for(int i=q-1;i>=0;i--){
	    if(info[i][0]==1)ans.push_back(ma[info[i][1]]);
	    else {
	        if(ma.find(info[i][2])!=ma.end())
	        ma[info[i][1]]=ma[info[i][2]];
	        else ma[info[i][1]]=info[i][2];
	    }
	}
	reverse(ans.begin(),ans.end());
	for(int i:ans)cout<<i<<" ";
	
	return 0;
}
