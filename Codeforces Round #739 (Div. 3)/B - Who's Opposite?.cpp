#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;cin>>a>>b>>c;
	    if(a<b)swap(a,b);
	    if(a-b<=1)cout<<-1<<endl;
	    else{
	        int d=a-b,total=2*d;
	        if(c>total or a>total)cout<<-1<<endl;
	        else{
	            cout<<((c+d)%total==0?total:(c+d)%total)<<endl;
	        }
	        
	    }
	}
	return 0;
}
