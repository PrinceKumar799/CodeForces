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
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        vector<int> ans;
        int op = n;
        for(int i=1;i<n;i++)
        {
            if(vec[i-1]>vec[i])
            {
                ans.push_back(i+1);
                op--;
            }
        }

        while(op--)
        {
            ans.push_back(1);
        }
        for(auto it: ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}
