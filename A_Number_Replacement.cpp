#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      int n;
      cin>>n;
      unordered_map<int,set<char>> m;
      vector<int> vec;

      for(int i=0;i<n;i++)
      {
        int temp;
        cin>>temp;
        vec.push_back(temp);
      }
      string str;
      cin>>str;
      for (int i = 0; i < n; i++)
      {
        m[vec[i]].insert(str[i]);
      }
      
      bool flag = true;
      for(auto it: m)
      {
        if(it.second.size()>1)
        flag = false;
      }
      if(flag)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
      
    }
    
    return 0;
}
