#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    stack<int> st;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        st.push(temp);
	    }
	   int ans = 0;
    //    st.top();
	//     st.pop();
        int temp = st.top();
        st.pop();
	    while(!st.empty())
	    {
            if(temp ^ st.top())
            {
                ans++;
                st.pop();
                if(!st.empty())
                {
                    temp = st.top();
                    st.pop();
                }
            }
            else
            {
                temp = st.top();
                st.pop();
            }
            // st.pop();
	        // if(temp==1)
	        // {
	        //     while(st.top()!=0 || !st.empty())
	        //     {
	        //         st.pop();
	        //     }
	        // }
	        // else
	        // {
	        //     while(st.top()!=1 || !st.empty())
	        //     {
	        //         st.pop();
	        //     }
	        // }
            // if(!st.empty())
            // {
            //     ans = ans ^ st.top();
	        //     st.pop();
            // }
            // temp = st.top();
	        // st.pop();
	    }
        cout<<ans<<endl;
	}
	return 0;
}
