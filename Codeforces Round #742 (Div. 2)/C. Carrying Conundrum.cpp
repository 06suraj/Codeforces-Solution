#include<bits/stdc++.h>
using namespace std;
 
// nice observation
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string num,even="",odd="";cin>>num;
	    for(int i=0;i<num.size();i++){
	        if(i%2)odd+=num[i];
	        else even+=num[i];
	    }
	    if(even.empty())even+='0';
	    if(odd.empty()) odd+='0';
	    int a=stoi(odd),b=stoi(even);
	    cout<<(long long)(a+1)*(b+1)-2<<endl;
	}
	return 0;
}
