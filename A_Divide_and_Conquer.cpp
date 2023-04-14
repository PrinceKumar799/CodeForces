#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> vec;
        int minOdd = INT32_MAX,minEven=INT32_MAX;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
                if(temp<minOdd)
                {
                    minOdd = temp;
                }
            sum += temp;
        }
        int cnt=0;
        if(sum&1!=0)
        {
            
            while((sum&1)!=0)
            {
                sum = sum - minOdd;
                minOdd = minOdd/2;
                sum += minOdd;
                if((sum&1)==0)
                {
                    cnt++;
                    continue;
                }
                else
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }

}