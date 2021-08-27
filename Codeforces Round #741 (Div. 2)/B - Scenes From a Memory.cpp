#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;cin>>n;string s,ans="";cin>>s;
	    int f[10]={0};
	    for(int i=0;i<n;i++){
	        if(s[i]=='1' or s[i]=='4' or s[i]=='6' or s[i]=='8' or s[i]=='9'){
	            ans+=s[i];
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        for(int i=0;i<n;i++){
	            for(int j=1;j<=9;j++){
	                if(f[j]){
	                    int num=j*10+(s[i]-'0');
	                    if(isprime(num)==0){
	                        ans+=to_string(num);
	                        flag=1;
	                        break;
	                    }
	                }
	            }
	            f[s[i]-'0']++;
	             if(flag)break;
	        }
	    }
	    cout<<ans.size()<<endl;
	    cout<<ans<<endl;
	    
	}
	return 0;
}
