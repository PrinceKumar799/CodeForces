#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	    int n;
	    cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else if((n/2+1)%10==0 )
        {
            cout<<n/2 + n/4 + 1<<" "<<n/2  - n/4<<endl;
        }
        else
        {
            cout<<n/2 + 1<<" "<<n/2<<endl;  
        }
    
	}
	return 0;
}
//161 = 40,121
//39 = 29,10
//199 = 149,50