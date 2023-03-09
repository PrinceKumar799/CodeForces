#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    // 0 1 0 -1 0 1 0 -1 0 1
    //0 1 0 -1 0 1 0 -1 0 1 0 -1 0 1 0 -1
    vector<int> ans;
    while(x>0 || y<0)
    {
        if(x>0)
        {
            ans.push_back(0);
            ans.push_back(1);
            x--;
        }
        if(y<0)
        {
            ans.push_back(0);
            ans.push_back(-1);
            y++;
        }
    }
    cout<<ans.size()<<endl;
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}