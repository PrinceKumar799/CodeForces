#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,c;
       cin>>n>>c;
       vector<int> costs;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            costs.push_back(temp+i+1);
        }
        sort(costs.begin(),costs.end());
        int  noOfTeleporters=0;
        int i= 0;
        // for(auto it: costs)
        // {
        //     cout<<it<<" ";
        // }
        while (c>=costs[i] && i<n)
        {
            noOfTeleporters++;
            c -= costs[i];
            i++;
        }
        cout<<noOfTeleporters<<endl;
       
    }
    return 0;
}