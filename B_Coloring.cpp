#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int x = n/k;
        int y = n%k;
        int cnt=0;
        bool flag = false;
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin>>temp;
            if(temp>x+1)
            flag = true;
            if(temp>x)
            {
                cnt++;
            }
        }
        if(flag)
        cout<<"NO"<<endl;
        else if(cnt>y)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
    
}