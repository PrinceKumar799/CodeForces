#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int k,n;
        cin>>k>>n;
        int first = 1;
        int last = n;
        int kval = k;
        vector<int> reverse;
        reverse.push_back(n);
        kval--;
        for(int i=1;i<k;i++)
        {
            cout<<"kval: "<<kval+1<<" n: "<<n<<endl;
            if(kval==n)
            {
                    for (int j = 1; j < n; j++)
                    {
                        cout<<j+1<<" ";
                    }
                    
            }
            else
            {
                if(n-i>=kval)
                {
                    reverse.push_back(n-i);
                n = n-i;
                kval -= 1;
                }
            }
        }
        vector<int> final;
        for (int i = k-1; i >= 0; i--)
        {
            cout<<reverse[i]<<" ";
        }
        

        cout<<endl;
    }
        
    
}