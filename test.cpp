#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int count=k;
    vector<bool> vec(n,true);
    int cov = 0;
    while(count>1)
    {
        for(int i=0;i<n;i++)
        {
            if(vec[i])
            {
                if(cov==k)
                {
                    vec[i] = false;
                    count--;
                    cov=0;
                }
                else
                cov++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i])
            cout<<i<<endl;
    }
    // vector<int> mark;
    // mark.push_back(0);
    // for(int i=1;i<=n;i++)
    // {
    //     int t=i;
    //     mark.push_back(i);
    // }
    // // for(int i=0;i<mark.size();i++)
    // // {

    // //     cout<<mark[i];
    // // }
    // vector<int>::iterator it = mark.begin();
    // while(mark.size()>2)
    // {
    // for(int i=1;i<mark.size();i++)
    // {
    //     if(count == k)
    //     {
    //         cout<<mark[i]<<endl;
    //         mark.erase(it+i);
    //         count = 0;
    //     }
    //     else
    //         count++;
    // }
    // }
    // cout<<mark[1]<<endl;
    return 0;
}
