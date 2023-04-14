#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<long long> a,k;
        long long ma = 0;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin>>temp;
            a.push_back(temp);
            if(temp>ma)
            {
                ma = temp;
            }
        }
        for (int i = 0; i < q; i++)
        {
            long long temp;
            cin>>temp;
            k.push_back(temp);
        }
        for (int i = 0; i < k.size(); i++)
        {
            long long temp=0;
            for (int j = 0; a[j]<=k[i]; j++)
            {
                temp += a[j];
            }
            cout<<temp<<" ";            
        }
        cout<<endl;
    }
    
    return 0;
}
