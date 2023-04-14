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
        string lid;
        int magzine[n];
        cin>>lid;
        for (int i = 0; i < n; i++)
        {
            cin>>magzine[i];
        }
        int ans = 0;
        int mi;
        for (int i = n-1; i >=0;)
        {
            if(lid[i]=='1')
            {
                mi = magzine[i];
                while (i>=0)
                {
                    mi = min(mi,magzine[i]);
                    ans += magzine[i];
                    i--;
                    if(lid[i]=='0')
                    break;
                }
                if(lid[i]=='0')
                {
                    mi = min(mi,magzine[i]);
                    ans += magzine[i];
                    ans = ans - mi;
                }
            }
            else
            {
                i--;
            }
        }
        
        cout<<ans<<endl;
        

    }
    
    return 0;
}
