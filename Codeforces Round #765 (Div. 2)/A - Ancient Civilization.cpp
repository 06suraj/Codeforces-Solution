#include<bits/stdc++.h>
using namespace std;
//decToBinary taken from https://www.geeksforgeeks.org/program-decimal-binary-conversion/
string decToBinary(int n)
    {
      string s="";
        for (int i = 31; i >= 0; i--) {
            int k = n >> i;
            if ((k & 1) > 0)
                s.push_back('1');
            else
                 s.push_back('0');
        }
        return s;
    }
    

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	   int n,l;cin>>n>>l;
	   string s[n];
	   for(int i=0;i<n;i++){
	      int x;cin>>x;
	       s[i]=decToBinary(x);
	       //cout<<s[i]<<" ";
	       
	   }
	   char ans[l];
	   for(int i=0;i<l;i++)ans[i]='0';
	   ans[l]='\0';
	   int temp=31;
	   for(int i=l-1;i>=0;i--,temp--){
	       int cnt=0,cnt1=0;
	       for(int i1=0;i1<n;i1++){
	           if(s[i1][temp]=='1')cnt1++;
	           else cnt++;
	       }
	       //cout<<cnt<<" "<<cnt1<<endl;
	       if(cnt1>cnt)ans[i]='1';
	       else ans[i]='0';
	   }
	   long long ans1=0;
	   int i=0;
	   for(int i1=l-1;i1>=0;i1--,i++){
	       if(ans[i1]=='1')ans1+=powl((long double)2,(long double)i);
	   }
	   cout<<ans1<<endl;
	}
	return 0;
}
