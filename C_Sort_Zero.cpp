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
        // set<int> s;
        unordered_map<int,bool> um;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
            um[temp] = false;
        }
        int mark=0; 
        for(int i=1;i<n;i++)
        {
            if(um[vec[i-1]])
            {
                vec[i-1] = 0;
            }
            if(vec[i-1]>vec[i])
            {
                um[vec[i-1]] = true;
                mark = i;
            }
        }
        cout<<"Mark: "<<mark<<endl;
        // for (int i = 0; i <= mark; i++)
        // {
        //     if(um[vec[i]]>=mark)
        //     {
        //         mark = um[vec[i]];
        //     }
        // }
        
        // for(int i=0;i<=mark;i++)
        // {
        //     s.insert(vec[i]);
        // }
        // cout<<s.size()<<endl;

    }
    
}