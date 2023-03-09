#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int> arr(n);
       int neg = 0;
       long long ans = 0;
       int mi =INT32_MAX;
       for (int i = 0; i < n; i++)
       {
        cin>>arr[i];
        ans += abs(arr[i]);
        if(arr[i]<0)
        {
            neg++;
        }
        if(abs(arr[i])<abs(mi))
        {
            mi =  abs(arr[i]);
            //cout<<"mi:"<<mi<<endl;
        }
       }
       if(neg&1)
       {
        ans -= 2*mi;
       }
       cout<<ans<<endl;
    }
    return 0;
}