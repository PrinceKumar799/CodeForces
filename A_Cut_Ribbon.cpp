#include<bits/stdc++.h>
using namespace std;
int solve(int i,int rem,int arr[],int n)
{
    if(rem==0)
    {
        return 1;
    }
    if(i>=n)
    {
        return 0;
    }
    // if(rem>0)
    // {
        int pick = solve(i+1,rem-arr[i],arr,n);
        int nonpick = solve(i+1,rem,arr,n);
        return 1+ max(pick,nonpick);
    // }
    // else
    //     return solve(i+1,rem,arr,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    cout<<solve(0,n,arr,n);
    
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