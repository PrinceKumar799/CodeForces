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
        vector<pair<int,int>> vec;
        string str="";
        for (int i = 0; i < n; i++)
        {
            str += "BAN";
        }
        int i=0,j=str.length()-1;
        while(i<=j)
        {
            if(str[i]=='A' && str[j]=='N')
            {
                vec.push_back({i+1,j+1});
                i++;
                j--;
            }
            else if(str[i]=='A')
            {
                j--;
            }
            else if(str[j]=='N')
            {
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        cout<<vec.size()<<endl;
        for(auto it: vec)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        
    }
    return 0;
}