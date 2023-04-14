#include <bits/stdc++.h>

using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int combination(int a,int b)
{
    return factorial(a) / (factorial(a-b)*factorial(b));
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        map<char,int> m;
        for (int i = 0; i < n; i++)
        {
            m[str[i]]++;
        }
        string ans="";
        for(int i=0;i<k;i++)
        {
            int j=n/k;;
            for(char ch='a';ch<='z';ch++)
            {
                if(j<=0)
                {
                    ans += ch;
                    break;
                }
                if(j>0 && m[ch]!=0)
                {
                    m[ch]--;
                    j--;
                }
                else
                {
                    ans += ch;
                    break;
                }
            }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}
