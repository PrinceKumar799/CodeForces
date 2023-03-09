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
        int vec[n+1];
        vec[0] = 0;
        for (int i = 1; i <=n; i++)
        {
            int temp;
            cin>>temp;
            vec[i] = temp;
        }
        unordered_map<int,int> im;
        for (int i = 1; i < n+1; i++)
        {
            if(im[vec[i]]==0)
            im[vec[i]]=i;
        }
        // for(auto it: im)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        unordered_map<int,int> um;
        for (int i = 1; i <= n; i++)
        {
            um[vec[i]]=i; 
        }

        // for(auto it: um)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        int ma =0;
        for (int i = 1; i < n; i++)
        {
            ma = max(ma,um[vec[i]]-im[vec[i]]);
        }
        
        if(ma>=n-2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        
    }
    return 0;
}