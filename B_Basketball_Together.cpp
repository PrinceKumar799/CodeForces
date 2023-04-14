#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin>>tem;
        vec.push_back(tem);
    }
    sort(vec.begin(),vec.end());

    int i = n-1;
    int b = vec[n-1];
    for(int i=0;i>=0;i++)
    {
        if((d+1)/b >= 1)
    }
    // int i=0,j=n-1;
    // int ans=0;
    // int count = 1;
    // while (i<j)
    // {
    //     if(vec[j]*(count+1) > d)
    //     {
    //         ans++;
    //         i++;
    //         j--;
    //         count=1;
    //     }
    //     else
    //     {
    //         i++;
    //         count++;
    //     }
    // }
    // if(n==1 && vec[0]>d)
    //     ans = 1;
    cout<<ans<<endl;
    
    return 0;
}
