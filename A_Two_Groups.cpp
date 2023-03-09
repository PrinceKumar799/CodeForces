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
        vector<int> vec1,vec2;
        long long int pos=0,neg=0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            // vec.push_back(temp);
            if(temp>=0)
            pos += temp;
            else
            neg += temp;
        }
        if(abs(pos)>abs(neg))
        cout<<abs(pos) - abs(neg)<<endl;
        else
        cout<<abs(neg) - abs(pos)<<endl;
        
    }
    return 0;
}