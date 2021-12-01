#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	     int p1,p2;
	     string x1,x2;
	    cin>>x1>>p1>>x2>>p2;
	   
	    if(x1.size()+p1>x2.size()+p2)cout<<'>'<<endl;
	    else if(x1.size()+p1<x2.size()+p2)cout<<'<'<<endl;
	    else {
	       //  cout<<x2.size()+p2;
	        int pos,pos1;
	        for(int i=x1.size()-1;i>=0;i--){
	            if(x1[i]!='0'){pos=i;break;}
	            else p1++;
	        }
	        for(int i=x2.size()-1;i>=0;i--){
	            if(x2[i]!='0'){pos1=i;break;}
	            else p2++;
	        }
	       // cout<<p1<<p2;
	         int flag=0;
	            for(int i=0;i<=min(pos,pos1);i++){
	                if(x1[i]<x2[i]){
	                    flag=1;
	                    break;
	                }else if(x1[i]>x2[i]){
	                    flag=2;
	                    break;
	                }
	            }
	        if(flag==1)cout<<'<'<<endl;
	        else if(flag==2)cout<<'>'<<endl;
	        else{
	            if(p1>p2) cout<<'<'<<endl;
	            else if(p1<p2)cout<<'>'<<endl;
	            else cout<<'='<<endl;
	        }
	        
	    }
	}
	return 0;
}
