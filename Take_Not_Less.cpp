#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> vec(n);
        int max = INT32_MIN;
	    for(int i=0;i<n;i++)
	    {
	        cin>>vec[i];
            if(vec[i]>max)
            {
                max = vec[i];
            }
	    }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(vec[i]==max)
            {
                cnt++;
            }
        }
        if(cnt%2==1)
        {
            cout<<"Marichka"<<endl;
        }
        else
            cout<<"Zenyk"<<endl;
        
	    // sort(vec.begin(),vec.end());
	    // bool Marichka=true,Zenyk=false;
	    // int prev = vec[n-1];
	    // for(int i=n-2;i>=0;i--)
	    // {
	    //     if(vec[i]>=prev)
	    //     {
	    //         Zenyk = !Zenyk;
	    //         Marichka = !Marichka;
	    //         //prev = vec[i];
	    //     }
	    // }
	    // if(Marichka)
	    // {
	    //     cout<<"Marichka"<<endl;
	  
	    // }
	    // else
	    //     cout<<"Zenyk"<<endl;
	}
	return 0;
}
