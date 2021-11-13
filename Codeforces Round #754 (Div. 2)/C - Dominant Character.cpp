#include<bits/stdc++.h>
using namespace std;
// isSubstring taken from https://www.geeksforgeeks.org/check-string-substring-another/
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s;cin>>s;
	    int pos=-1,ans=INT_MAX,cnt_b=0,cnt_c=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='a' and pos==-1)pos=i,cnt_b=0,cnt_c=0;
	        else if(s[i]=='a'){
	            if(cnt_b<2 and cnt_c<2)ans=min(ans,i-pos+1);
	            cnt_b=0,cnt_c=0,pos=i;
	        }else if(s[i]=='b')cnt_b++;
	        else cnt_c++;
	    }
	    string s1="abbacca",s2="accabba";
	     int res = isSubstring(s1, s),res1=isSubstring(s2, s);
	     if(res!=-1 or res1!=-1)ans=min(ans,7);
	    if(ans==INT_MAX)cout<<-1<<endl;
	    else cout<<ans<<endl;
	}
	return 0;
}
