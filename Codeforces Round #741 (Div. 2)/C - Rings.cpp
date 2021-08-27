#include<bits/stdc++.h>
using namespace std;
//  tricky one 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,pos=-1;cin>>n;string s;cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0')pos=i;
	    }
	    pos++;
	    if(pos==0)cout<<1<<" "<<n/2<<" "<<2<<" "<<n/2+1<<endl;  // case 1 when there is no zero w=1
	    else if(pos>ceil(n/2.0))cout<<1<<" "<<pos<<" "<<1<<" "<<pos-1<<endl; // case 2 when last occurence of  zero is on right side , i.e w=2
	    else cout<<pos<<" "<<n<<" "<<pos+1<<" "<<n<<endl; // case 3 when last occurence of  zero is on left side , i.e w=1
	    
	}
	return 0;
}
