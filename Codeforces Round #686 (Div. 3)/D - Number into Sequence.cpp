#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	  long  long n,n1,flag=0;cin>>n;n1=n;unordered_map<long long int,long long int>f;
	  while(n%2==0){
	        f[2]++;
	        n=n/2;
	        flag=1;
	    }
        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            while (n % i == 0)
            {
                f[i]++;
                n = n/i;
                flag=1;
                //cout<<i<<" ";
                
            }
        }
        if(flag==0)cout<<1<<endl<<n1<<endl;else{
        if(n>2)f[n]++;
            int maxi=INT_MIN,val;
            for(auto i=f.begin();i!=f.end();i++){
                if((i->second)>maxi){
                    maxi=i->second;
                    val=i->first;
                    
                }
            }
            
            
            //cout<<maxi;
            if(maxi==1)cout<<1<<endl<<n1<<endl;
            else{
                vector<long long>ans;
                for(int i=1;i<=maxi-1;i++)ans.push_back(val);
                long long temp=val;
                  for(auto i=f.begin();i!=f.end();i++)
                {
                    if((i->first)!=val)
                   {
                       //cout<<i->first<<" ";
                       while(i->second){
                           temp=temp*(i->first);
                           (i->second)--;
                       }
                       //ans.push_back(temp);
                       
                   }
                }
                ans.push_back(temp);
                cout<<ans.size()<<endl;
                for(long long i:ans)cout<<i<<" ";
                cout<<endl;
            }
        }
	}
	return 0;
}
