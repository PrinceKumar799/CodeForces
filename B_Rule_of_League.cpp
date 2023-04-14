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
        int n,x,y;
        cin>>n>>x>>y;
        int count =max(x,y);
        if((x!=0 && y!= 0)||(x==0 && y==0) || ((n-1)%count != 0))
        {
            cout<<-1<<endl;
        }
        else
        {
            int ans[n-1]={0};
            int temp = n-1;
            for (int i = n-2; i >=0;i--)
            {
                // while(count>0 && i>=0)
                // {
                //     ans[i] = temp;
                //     i--;
                //     count--;
                // }
                if(count==0)
                {
                    count = max(x,y);
                    temp -= count;
                }
                else
                {
                    ans[i] = temp;
                    count--;
                }
            } 
            for (int i = 0; i < n-1; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
              
        }
        
        // else
        // {
        //     for (int i = 0; i < n-1;i++)
        //     {
        //         int temp = i+1;
        //         while(count>0 && i<n-1)
        //         {
        //             ans[i] = temp;
        //             i++;
        //             count--;
        //         }
        //         if(count>0)
        //         {
        //             flag = true;
        //         }
        //     }          
        // }
        // if(flag)
        // {
        //     cout<<-1<<endl;
        // }
        // else{
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout<<ans[i]<<" ";
        //     }
        //     cout<<endl;
        // }
        
    }
    
    return 0;
}
