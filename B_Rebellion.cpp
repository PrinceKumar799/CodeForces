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
        int ans=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(vec[i]==1 && vec[j]==0)
            {
                ans++;
                i++;
                j--;
            }
            else if(vec[i]==0 && vec[j]==0)
            {
                i++;
            }
            else
            j--;
        }
        cout<<ans<<endl;

    }
    
    return 0;
}
