#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1)
        return false;
    
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0)
            return false;            
    }
    return true;    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if((b-a == 1) ||(isPrime(b)) )
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
