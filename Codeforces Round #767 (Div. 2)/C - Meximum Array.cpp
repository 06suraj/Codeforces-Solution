#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,smallest,curr;cin>>n;
	    unordered_map<int,int>ma;
	    unordered_set<int>s;
	    int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n;i++){
	        ma[arr[i]]++;
	        s.insert(arr[i]);
	    }
	    for(int i=0;i<=n;i++){
	        if(s.find(i)==s.end()){
	            smallest=i;
	            curr=i;
	            break;
	        }
	    }
	    s.clear();
	    vector<int>ans;
	    for(int i=0;i<n;i++){
	        if(arr[i]>smallest){
	            ma[arr[i]]--;
	            if(ma[arr[i]]==0)
	            curr=min(curr,arr[i]);
	        }else{ 
	            s.insert(arr[i]);
	            ma[arr[i]]--;
	            if(ma[arr[i]]==0)
	            curr=min(curr,arr[i]);
	        }
	        if(s.size()==smallest){
	            int temp=INT_MIN;
	            for(int i:s)temp=max(temp,i);
	            if(temp==INT_MIN)ans.push_back(0);
	            else
	            ans.push_back(temp+1);
	            s.clear();
	            smallest=curr;
	        }
	        
	    }
	    cout<<ans.size()<<endl;
	    for(int i:ans)cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}
