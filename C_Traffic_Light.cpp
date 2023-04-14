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
        int n;
        cin>>n;
        char c;
        cin>>c;
        string str;
        cin>>str;
        int ans = 0;
        int firstg=-1;
        if(c=='g')
            ans = 0;
        else{
            for (int i = 0; i < n; i++)
            {
                if(str[i]=='g')
                {
                    firstg = i;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if(str[i]==c)
                {
                    int count =0;
                    bool flag = false;
                    for (int j = i+1; j < n; j++)
                    {
                        count++;
                        if(str[j]=='g')
                        {
                            flag = true;
                            break;
                        }
                    }
                    i = i + count;
                    if(flag)
                    {
                        ans = max(ans,count);
                    }
                    else
                    {
                        ans = max(ans,count+firstg+1);
                    }
                    
                }
            }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}
