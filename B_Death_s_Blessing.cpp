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
        long long int s1=0,s2=0;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            s1 += a;
        }
        for (int i = 0; i < n; i++)
        {
            int b;
            cin>>b;
            s2 += b;
            if(b>max)
            max = b;
        }
        int long long ans = s1 + s2 - max;
        cout<<ans<<endl;
        
    }
    
    return 0;
}
