//given a array find total no of subsequences whose sum = k use one element only one time in a subsequence
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k;
    cin>>k;
    long long reqSum= k*(k+1)/2;
    for (int i = 0; i < k-1; i++)
    {
        int temp;
        cin>>temp;
        reqSum -= temp;
    }
    cout<<reqSum<<endl;
    
}