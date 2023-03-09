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
       int x=0,y=0;
       bool flag = false;
       for (int i = 0; i < n; i++)
       {
            if(str[i]=='L')
            {
                x--;
            }
            else if(str[i]=='R')
            {
                x++;
            }
            else if(str[i]=='U')
            {
                y++;
            }
            else{
                y--;
            }
            if(x==1 && y==1)
            {
                flag = true;
                break;
            }
       }
       if(flag)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
       
    }
    return 0;
}