#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int solve(int idx,int sum)
{
    if(sum==0)
    {
        return 1;
    }
    if(sum<0)
    {
        return 0;
    }
    int pick = solve(idx,sum-vec[idx]);
    int t = solve(idx+1,sum-vec[idx]);
    int nonpick = solve(idx+1,sum);
    // idx++;
    return  t+ pick + nonpick;
}

int main()
{
    int sum = 0;
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    cout<<solve(0,x);

}