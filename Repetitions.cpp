//given a array find total no of subsequences whose sum = k use one element only one time in a subsequence
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string k;
    cin>>k;
    int cntA=0,cntT=0,cntC=0,cntG=0;
    for (int i = 0; i < k.length(); i++)
    {
        if(k[i]=='A')
        {
            cntA++;
        }
        else if(k[i]=='T')
        {
            cntT++;
        }
        else if(k[i]=='C')
        {
            cntC++;
        }
        else if(k[i]=='G')
        {
            cntG++;
        }
    }
    cout<<max(cntA,max(cntC,max(cntG,cntT)))<<endl;
    
}