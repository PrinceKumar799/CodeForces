#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
        cin>>n>>m;
        vector<long long int> a,b;
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin>>temp;
            a.push_back(temp);
            sum += temp;
        }
        for (int i = 0; i < m; i++)
        {
            long long temp;
            cin>>temp;
            b.push_back(temp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for (int i = 0; i < m && i<n; i++)
        {
            sum -= a[i];
            sum += b[i];
        }
        cout<<sum<<endl;
	}
	return 0;
}
