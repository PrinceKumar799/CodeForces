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
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        int ans = 0;
        if(n<=8)
        ans = 6*combination(10-n,2);
        else ans =0;
        cout<<ans<<endl;

    }
    
    return 0;
}
