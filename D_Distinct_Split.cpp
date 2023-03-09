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
       string str;
       cin>>str;
       vector<int> pref(str.size(),0);
       vector<int> suff(n+1,0);
       unordered_set<int> s;
       for (int i = 0; i < str.size(); i++)
       {
        s.insert(str[i]);
        pref[i] = s.size();
       }
       s.clear();
       for (int i = n-1; i >=0; i--)
       {
            s.insert(str[i]);
            suff[i] = s.size();
       }
       int ans = 0;
       for (int i = 0; i < n; i++)
       {
        //cout<<"prefix "<<pref[i]<<"suffix: "<<suff[i]<<endl;
        ans = max(ans,pref[i]+suff[i+1]);
       }
       cout<<ans<<endl;
    }
    return 0;
}