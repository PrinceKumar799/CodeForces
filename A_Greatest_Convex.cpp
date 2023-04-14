#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define vi vector<int>
#define rep(i,s,n) for(int i=s;i<n;i++)
const int M=1e9+7;

// Driver Code
int main()
{
	int t;cin>>t;
    while (t--)
    {
        int k;
        cin>>k;
        int fact = 1;
        bool found = false;
        int ans=0;
        for(int i=1;i<=k-2;i++)
        {
            if(fact*(fact+2)%k==0)
            {
                ans = i+1;
                found = true;
            } 
            fact = fact*i;
        }
        if(ans==0)
        cout<<-1<<endl;
        else 
        cout<<ans<<endl;
    }
	return 0;
}
