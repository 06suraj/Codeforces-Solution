#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	   unsigned long long n,m,x,y,d1,d2,d3,d4;cin>>n>>m>>x>>y;
	    d1=(x-1)*(x-1)+(y-1)*(y-1);
	    d2=(x-n)*(x-n)+(y-m)*(y-m);
	    d3=(x-1)*(x-1)+(y-m)*(y-m);
	    d4=(x-n)*(x-n)+(y-1)*(y-1);
	    vector<unsigned long long>d{d1,d2,d3,d4};
	    sort(d.begin(),d.end(),greater<int>());
	    if(d[0]==d1){cout<<1<<" "<<1<<" ";
	    
	       cout<<n<<" "<<m<<" ";
	    }
	    else if(d[0]==d2){cout<<n<<" "<<m<<" ";
	        cout<<1<<" "<<1<<" ";
	      
	    }
	    else if(d[0]==d3){cout<<1<<" "<<m<<" ";
	    cout<<n<<" "<<1<<" ";}
	    
	    else{ cout<<n<<" "<<1<<" ";
	    cout<<1<<" "<<m<<" ";
	   }
	    cout<<endl;
	    
	    
	   
	    
	    
	    
	}
	return 0;
}
