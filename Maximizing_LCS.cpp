#include <bits/stdc++.h>
using namespace std;
//abcd==dcba
int lcs( string a, string b, int m, int n, vector<vector<int> >& dp) 
{ 
    if (m == 0 || n == 0) 
        return 0; 
    if (a[m-1] == b[n-1]) 
        return dp[m][n] = 1 + lcs(a, b, m-1, n-1,dp); 
    if (dp[m][n] != -1) {
        return dp[m][n];
    }
    return dp[m][n] = max(lcs(a, b, m, n - 1, dp),
                          lcs(a, b, m - 1, n, dp));
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int len;
        cin>>len;
        string str;
        cin>>str;
        int aliceIda=0,bobIda=len-1;
        string aliceStr="",bobStr="";
        // int lcs=0;
        while (aliceIda<bobIda)
        {
            aliceStr+=str[aliceIda];
            bobStr += str[bobIda];
            bobIda--;
            aliceIda++;
        }
        if(aliceIda==bobIda)
        {
               aliceStr+=str[aliceIda];
        }
        int m = aliceStr.size();
        int n = bobStr.size();
        // vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
        // cout<<lcs(aliceStr,bobStr,m,n,dp)<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
            }
            
        }
        
	}
	return 0;
}
