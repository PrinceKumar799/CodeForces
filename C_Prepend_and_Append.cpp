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
       string str;
       cin>>str;
       map<char,int> m;
        for (int i = 0; i < n; i++)
        {
            m[str[i]]++;
        }
        unordered_set<char> s1,s2;
        int max=0;
        char ch;
        for(auto it: m)
        {
            ch = it.first;
            max = it.second;
            break;
        }
        int split = (max+1)/2;
        int count=0;
        int first=0,second=0;
        for (int i = 0; i < n; i++)
        {
            if(count<=split)
            {
                first++;
            }
            else
            {
                second++;
            }
            if(str[i]==ch)
            {
                count++;
            }
        }
        cout<<first+second<<endl;

    }
    return 0;
}