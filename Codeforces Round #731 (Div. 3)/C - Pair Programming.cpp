#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	    int k,n,m,flag=0;cin>>k>>n>>m;int a[n],b[m];for(int i=0;i<n;i++)cin>>a[i];
	    for(int i=0;i<m;i++)cin>>b[i];
	    vector<int>ans;
	    int i=0,j=0;
	    while(i<n and j<m){
	        if(a[i] and b[j]){
	            if(min(a[i],b[j])>k){flag=1;break;}
	            else{
	                if(a[i]<=k and b[j]<=k){
	                    ans.push_back(a[i]);
	                    ans.push_back(b[j]);
	                    i++,j++;
	                }else if(a[i]<=k)
	                {
	                    ans.push_back(a[i]);
	                    i++;
	                }else {
	                    ans.push_back(b[j]);
	                    j++;
	                }
	            }
	        }else if(a[i]){
	            k++;j++;
	           ans.push_back(b[j-1]);
	                
	        }else if(b[j]){
	            k++;i++;
	            ans.push_back(a[i-1]);
	                
	        }
	        else {
	            ans.push_back(a[i]);
	            ans.push_back(b[j]);
	            k=k+2;
	            i++,j++;
	            
	        }
	    }
	    if(i<n){
	        while(i<n){
	            if(a[i]==0){ans.push_back(a[i]);k++,i++;}
	            else{
	                if(a[i]>k){
	                    flag=1;
	                    break;
	                }else{
	                    ans.push_back(a[i]);
	                    i++;
	                }
	            }
	        }
	    }
	    if(j<m){
	        while(j<m){
	            if(b[j]==0){ans.push_back(b[j]);k++,j++;}
	            else{
	                if(b[j]>k){
	                    flag=1;
	                    break;
	                }else{
	                    ans.push_back(b[j]);
	                    j++;
	                }
	            }
	        }
	    }
	    if(flag)cout<<-1<<endl;
	    else {
	        for(int i:ans)cout<<i<<" ";
	        cout<<endl;
	    }
	    
	}
	return 0;
}
