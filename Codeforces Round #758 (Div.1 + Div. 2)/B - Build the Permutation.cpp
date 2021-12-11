#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	     int n,a,b;cin>>n>>a>>b;
	   	  if(abs(a-b)>1 or a+b>(n==1?0:n-2))cout<<-1<<endl;
	    else{
	        int ans[n],f[n+1];
	        memset(f,0,sizeof(f));
	        memset(ans,-1,sizeof(ans));
	        int val,val1,pos=-1,flag=0;
	        if(a>=b){
	            val=n;
	            val1=1;
	            int temp=a,temp1=b;
	            if(a==b)flag=1;
	            for(int i=1;i<n and a;i=i+2,a--){
	                ans[i]=val;
	                val--;
	                pos=i;
	            }
	           
	            for(int i=2;i<n and b;i=i+2,b--){
	                ans[i]=val1;
	                val1++;
	            }
	            if(temp==temp1){
	                 ans[0]=val1;
	                 val1++;
	                for(int j=pos+2;j<n;j++){
	                    ans[j]=val1;
	                    val1++;
	                }
	               // ans[0]=val1;
	            }else{
	            for(int j=pos+1;j<n;j++){
	                ans[j]=val;
	                val--;
	            }
	                ans[0]=val;
	            }
	            
	        }else if(a<b){
	            val=1;
	            val1=n;
	            for(int i=1;i<n and b;i=i+2,b--){
	                ans[i]=val;
	                val++;
	                pos=i;
	            }
	           
	            for(int i=2;i<n and a;i=i+2,a--){
	                ans[i]=val1;
	                val1--;
	            }
	            for(int j=pos+1;j<n;j++){
	                ans[j]=val;
	                val++;
	            }
	            ans[0]=val;
	        }
	        for(int i:ans)cout<<i<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}
