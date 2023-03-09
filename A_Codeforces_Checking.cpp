#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       char c;
       cin>>c;
       bool flag = false;
       string str = "codeforces";
       for (int i = 0; i < str.size(); i++)
       {
            if(str[i]==c)
            {
                flag = true;
                break;
            }
       }
       if(flag)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
       
    }
    return 0;
}