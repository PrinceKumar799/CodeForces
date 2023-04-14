#include<bits/stdc++.h>
using namespace std;
int solve(int sum,int arr[],int n)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i==0 && j!=0)
            dp[i][j] = 0;
            else if(j==0)
            dp[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j];
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    for(int i=0;i<=n;i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][sum];

    // if(rem==0)
    // {
    //     return 1;
    // }
    // if(i>=n || rem<0)
    // {
    //     return 0;
    // }
    // int nonpick = solve(i+1,rem,arr,n);
    // int pick =0;
    // if(rem>=arr[i])
    // {
    //     int pick = solve(i,rem-arr[i],arr,n);
    // }
    // return nonpick + pick;
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<solve(sum,arr,n);
    
}

// vector<int> vec;
// int solve(int idx,bool curr)
// {
//     if(curr>=n)
//     {
//         return 0;
//     }
//     if(curr==n-1)
//     {
//         return arr[idx];
//     }
    
//     int pick = heights[idx] + solve(idx+1,!curr);
//     int t = solve(idx+1,!curr);
//     int nonpick = solve(idx+1,sum);
//     // idx++;
//     return  t+ pick + nonpick;
// }
// int dp[sz];
// int solve( int idx, bool curr)
// {
//     int pick;
//     int nopick;
//     if(idx>=n) return 0;
//     if(dp[idx]!=-1)
//         return 0;
//     else if()
//     if(curr) 
//     {
//             pick=line1[idx]+solve(idx+1,!curr);
//             nopick=solve(idx+1,curr);
//     }
//      else
//      {
//             pick=line2[idx]+solve(idx+1,!curr);
//      }
// }