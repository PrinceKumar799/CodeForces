#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> vec(n);
        int ones=0,twos=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]==1)
            {
                ones++;
            }
            else{
                twos++;
            }
        }
        int cnt = 0;
        if(twos==0)
        {
            cout<<1<<endl;
        }
        else if(twos%2)
        {
            cout<<-1<<endl;
            continue;
        }
        else{
            for (int i = 0; i < n; i++)
            {
                if(vec[i]==2)
                cnt++;
                if(cnt==twos/2)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
            // cout<<ans<<endl;
        }
        
	}
	return 0;
}
