//given a array find total no of subsequences whose sum = k use one element only one time in a subsequence
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;

    while (k>1)
    {
    cout<<k<<" ";
    if(k&1)
    {
        k = 3*k + 1;
    }
    else
    {
        k = k/2;
    }
    }
    cout<<1<<endl;
    
}