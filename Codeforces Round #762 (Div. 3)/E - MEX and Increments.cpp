#include<bits/stdc++.h>
using namespace std;
// few keen observations are 
/* i to be mex 
1.there must be atleast one occurence of each number from 0 to i-1 
2. all occurence of i should be removed

now the second condition can never be false as because we can always increment the i to i+1 , however 1st condition can be false 
so to check that we have to find the largest number which is just smaller than j(j is 0 to i-1) and if it is not there then our answer will be false , and from there onwards mex for all i would be -1, which is quite intuitive as because if we can not find the smallest non negative number for i , then surely we cant find it for i+1...n

now to apply above greedy algo , the t.c. would be n^2 , so to speed up we will use dp
where 
dp[i]=(minimum operation to be the mex=i)
i.e. dp[i]=there must be atleast one occurence of each number from (0,1,2,3,...,i-2,i-1)+cnt[i](to remove the occurence of i we will simply increment all i's) 
and dp[i-1]=there must be atleast one occurence of each number from (0,1,2,3,...,i-2)+cnt[i-1](to remove the occurence of i we will simply increment all i's) 
so the common part between dp[i] and dp[i-1] is  atleast one occurence of each number from (0,1,2,3,...,i-2)
so dp[i]=common part+min. operation to make i-1(using the algo , and for that we will use multiset and ub to find the largest number smaleer than i-1 and then remove it)+cnt[i] */

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<long long int>cnt(n+1,0),ans(n+1,0);
	    multiset<int>m;
	    for(int i=1;i<=n;i++){
	        int x;cin>>x;
	        cnt[x]++;
	        m.insert(x);
	    }
	    ans[0]=cnt[0];
	    for(int i=1;i<=n;i++){
	        ans[i]=ans[i-1]-cnt[i-1]; // common aprt
	        auto it=m.upper_bound(i-1);
	        if(it==m.begin()){
	            for(int j=i;j<=n;j++)ans[j]=-1;
	            break;
	        }
	        it--;
	        ans[i]+=cnt[i]+i-1-*it;
	        m.erase(it) ;
	    }
	    for(long long int i:ans)cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}
