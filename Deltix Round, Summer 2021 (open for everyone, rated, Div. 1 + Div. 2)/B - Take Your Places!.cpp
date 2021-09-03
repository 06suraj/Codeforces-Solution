#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	 int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	 queue<int>even,odd;
	 for(int i=0;i<n;i++){
	     if(arr[i]%2)odd.push(i);
	     else even.push(i);
	 }
	 int si,ans=0;
	 if(n%2)si=n/2+1;
	 else si=n/2;
	 if(max(even.size(),odd.size())>si)cout<<-1<<endl;
	 else{
	     int cnt=0;
	     if(even.size()>odd.size()){
	         for(int i=0;i<n;i=i+2){
	             if(even.front()==i)even.pop();
	             else{
	                 ans+=abs(even.front()-i);
	                 even.pop();
	             }
	         }
	       //   for(int i=1;i<n;i=i+2){
	       //      if(odd.front()==i)odd.pop();
	       //      else{
	       //          cnt+=abs(odd.front()-i);
	       //          odd.pop();
	       //      }
	       //  }
	         cout<<ans<<endl;
	     }else if(odd.size()>even.size()){
	         for(int i=0;i<n;i=i+2){
	             if(odd.front()==i)odd.pop();
	             else{
	                 ans+=abs(odd.front()-i);
	                 odd.pop();
	             }
	         }
	            cout<<ans<<endl;
	     }else{
	          int cnt=0,cnt1=0;
	          for(int i=0;i<n;i=i+2){
	             if(odd.front()==i)odd.pop();
	             else{
	                 cnt+=abs(odd.front()-i);
	                 odd.pop();
	             }
	         }
	         for(int i=0;i<n;i=i+2){
	             if(even.front()==i)even.pop();
	             else{
	                 cnt1+=abs(even.front()-i);
	                 even.pop();
	             }
	         }
	         ans=min(cnt,cnt1);
	            cout<<ans<<endl;
	     }
	 }
	}
	return 0;
}
