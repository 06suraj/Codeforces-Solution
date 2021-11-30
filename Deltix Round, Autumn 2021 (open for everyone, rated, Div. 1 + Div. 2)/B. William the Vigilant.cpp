#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int n,q;cin>>n>>q;
	string s;cin>>s;
	int cnt=0;
	for(int i=0;i<=n-3;i++){
	    if(s[i]=='a' and s[i+1]=='b' and s[i+2]=='c')cnt++;
	}
	while(q--){
	    int pos;
	    char c;
	    cin>>pos>>c;
	    pos--;
	    if(s[pos]==c)cout<<cnt<<endl;
	    else{
	        int flag=0;
	      if(s[pos]=='a'){
	          if(pos+2<n){
	              if(s[pos+1]=='b' and s[pos+2]=='c'){cnt--;flag=1;}
	          }
	      }else if(s[pos]=='b'){
	          if(pos+1<n and pos-1>=0){
	              if(s[pos+1]=='c' and s[pos-1]=='a'){cnt--;flag=1;}
	          }
	      }else {
	          if(pos-2>=0){
	              if(s[pos-1]=='b' and s[pos-2]=='a'){cnt--;flag=1;}
	          }
	      } 
	   //   if(flag)
	   //  cout<<cnt<<endl;
	    s[pos]=c;
	    if(s[pos]=='a'){
	          if(pos+2<n){
	              if(s[pos+1]=='b' and s[pos+2]=='c')cnt++;
	          }
	      }else if(s[pos]=='b'){
	          if(pos+1<n and pos-1>=0){
	              if(s[pos+1]=='c' and s[pos-1]=='a')cnt++;
	          }
	      }else {
	          if(pos-2>=0){
	              if(s[pos-1]=='b' and s[pos-2]=='a')cnt++;
	          }
	      }
	    cout<<cnt<<endl;
	    }
	    
	}
	return 0;
}
