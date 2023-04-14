#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int count = 0;
	    for(int i=1;i<n;i++)
	    {
	        if(str[i]=='0' && str[i-1]=='1')
	        {
	            count++;
	            while (str[i]=='0')
                {
                    i++;
                }
                
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
