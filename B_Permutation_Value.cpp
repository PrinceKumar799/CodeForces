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
        int  ans[n];
        int i=1,j=n-2;
        bool right = true;
        int r = n;
        int l = 1;
        for(int i=0;i<n;i++)
        {
            if(right)
            {
                ans[i] = l;
                l++;
            }
            else{
                ans[i] = r;
                r--;
            }
            right = !right;

        }
        for(auto it: ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}
