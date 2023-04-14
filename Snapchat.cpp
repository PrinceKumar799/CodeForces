#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    int streak=0;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=1 && b[i]>=1)
	        {
	            count++;
	        }
	        else
	        {
	            streak = max(streak,count);
	            count =0;
	        }
	    }
	    streak = max(streak,count);
	   count =0;
	   cout<<streak<<endl;
	}
	return 0;
}
