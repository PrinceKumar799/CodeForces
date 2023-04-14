#include<bits/stdc++.h>
using namespace std;
bool bfs(unordered_map<int,vector<int>> &adj,unordered_map<int,int> citywiseStrength,int n)
{
    queue<int> q;
    vector<bool> visited(n);
    q.push(1);
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        visited[front] = true;
        citywiseStrength[front]--;
        for(auto it: adj[front])
        {
            if(!visited[it] && citywiseStrength[front]>=0)
            {
                visited[it] = true;
                citywiseStrength[front]--;
                q.push(it);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(!visited[i])
        return false;
    }
    return true;    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,r,m;
        cin>>n>>r>>m;
        unordered_map<int,vector<int>> adj;
        unordered_map<int,int> citywiseStrength;
        for (int i = 0; i < r; i++)
        {
            int u,v;
            cin>>u;
            cin>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i = 0; i < m; i++)
        {
            int city;
            int strength;
            cin>>city;
            cin>>strength;
            citywiseStrength[city] = strength;
        }
        bool allProtectd = bfs(adj,citywiseStrength,n);
        if(allProtectd)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    
}



#include<bits/stdc++.h>
using namespace std;
