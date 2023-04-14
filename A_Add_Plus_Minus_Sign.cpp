#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b)
{
    int res=1;
    while(b)
    {
            res *= a;
            b--;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        // vector<int> vec(n);
        // for(int i=0;i<n;i++)
        // {
        //     char temp;
        //     cin>>temp;
        //     vec.push_back(temp-'0');
        // }
        string str;
        cin>>str;
        string res="";
        int total = str[0] - '0';
        for(int i=1;i<n;i++)
        {
            if(total-(str[i]-'0')<total && total-(str[i]-'0')>=0)
            {
                res += '-';
                total = total-(str[i]-'0');
            }
            else
            {
                res += '+';
                total = total+(str[i]-'0');
            }
        }
        cout<<res<<endl;
    }
    
    
}