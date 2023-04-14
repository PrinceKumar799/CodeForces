#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int> um;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            um[temp]++;
        }
        bool flag = false;
        for(auto it: um)
        {
            if(it.second>1)
            flag = true;
        }
        if(flag)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
    
    return 0;
}
