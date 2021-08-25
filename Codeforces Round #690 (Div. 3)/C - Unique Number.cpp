#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    
	        
	        int n;cin>>n;
	        if(n>45) cout<<-1<<endl;
	        else
	        {
	            if(n<10) cout<<n<<endl;
	            else if(n>=10&&n<=17)
	            {
	                cout<<n-9<<9<<endl;
	           }else if(n>=18&&n<=24)	 
	           {
	               cout<<n-17<<8<<9<<endl;
	           }
	           else if(n>=25&&n<=30)
	           {
	               cout<<n-24<<7<<8<<9<<endl;
	           }
	           else if(n>=31&&n<=35)
	           {
	               cout<<n-30<<6<<7<<8<<9<<endl;
	           }
	           else if(n>=36&&n<=39)
	           cout<<n-35<<5<<6<<7<<8<<9<<endl;
	           else if(n>=40&&n<=42)
	           cout<<n-39<<4<<5<<6<<7<<8<<9<<endl;
	           else if(n>=43&&n<=44) cout<<n-42<<3<<4<<5<<6<<7<<8<<9<<endl;
	           else cout<<1<<2<<3<<4<<5<<6<<7<<8<<9<<endl;
	       }
	}
	return 0;
}
