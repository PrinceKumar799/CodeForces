#include <bits/stdc++.h>
using namespace std;

int main() {
	//2 4 6 8
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> vec;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        vec.push_back(temp);
	    }
	    int i=0,j=n-1;
	    bool flag = true;
	    vector<int> dist;
	    while(i<=j)
	    {
	        dist.push_back(vec[j]-vec[i]);
	        i++;j--;
	    }

        // for(int i=0;i<vec.size();i++)
	    // {
	    //     cout<<vec[i]<<" "<<endl;
	    // }

	    for(int i=1;i<dist.size();i++)
	    {
	        if(dist[i]>dist[i-1])
	        flag = false;
	    }

        // for(int i=0;i<dist.size();i++)
	    // {
	    //     cout<<dist[i]<<" ";
	    // }

        for(int i=0;i<dist.size();i++)
	    {
	        if(dist[i]<0)
            flag=false;
	    }
	    if(!flag)
	    cout<<-1<<endl;
	    else
	    cout<<dist[0]<<endl;
	   
	}
	return 0;
}


// 1 3 8 9
//