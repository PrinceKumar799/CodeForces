#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int mi = INT32_MAX;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<mi)
	            mi = arr[i];
	    }
	    int cnt = 0;
	    bool flag = true;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=mi)
	            cnt++;
	         if((arr[i]%mi)!=0)
	            flag = false;
	    }
	    if(!flag)
	    {
            for(int i=0;i<n;i++)
	    {
	        if(arr[i]==mi)
	            cnt++;
	    }
        }
	    cout<<cnt<<endl;
	}
	return 0;
}
