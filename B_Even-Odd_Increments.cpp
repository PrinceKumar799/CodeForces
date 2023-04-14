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
        int n,q;
        cin>>n>>q;
        // vector<int> vec(n);
        long long sum = 0;
        int evens=0,odds=0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            // vec.push_back(temp);
            sum += temp;
            if(temp&1)
            {
                odds++;
            }
            else{
                evens++;
            }
        }
        // vector<pair<int,int>> queries(q);
        for (int i = 0; i < q; i++)
        {
            int type,x;
            cin>>type>>x;;
            // queries.push_back(make_pair(type,x));
            if(type==0)
            {
                sum += evens*x;
                if(x&1)
                {
                    evens = 0;
                    odds = n;
                }

            }
            else
            {
                sum += odds*x;
                if(x&1)
                {
                    evens = n;
                    odds = 0;
                }
            }
            cout<<sum<<endl;
        }
        
    }
    
    return 0;
}
