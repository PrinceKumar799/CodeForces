#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int zeros=0,ones=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp==0)
            {
                zeros++;
            }
            else
            ones++;
        }
        if(ones>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
